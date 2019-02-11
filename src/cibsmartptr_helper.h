#pragma once

class CibSmartPtrHelper
{
public:
  bool isIntrusiveSmartPtr(const std::string& typeName) const;
  bool isIntrusivePtr(const std::string& typeName) const;
};
