#pragma once

#include <map>

/*!
 * @file
 * Contains functions to use template resources.
 */

typedef std::map<std::string, std::string> StringToStringMap;

template<typename _FwdIterType>
std::string replacePlaceholdersInTemplate(_FwdIterType beg, _FwdIterType end, const StringToStringMap& substitionInfo)
{
  std::string outstr;
  _FwdIterType i = beg;
  for (; i != end; ++i)
  {
    _FwdIterType s = std::find(i, end, '$');
    if (s == end) break;
    outstr.append(i, s);
    ++s;
    _FwdIterType e = std::find(s, end, '$');
    i = e;
    if (e == end) break;
    std::string placeholderToken(s, e);
    StringToStringMap::const_iterator itr = substitionInfo.find(placeholderToken);
    if (itr == substitionInfo.end())
      continue;
    outstr.append(itr->second.begin(), itr->second.end());
  }
  outstr.append(i, end);

  return outstr;
}
