#include "podofo/base/PdfCanvas.h"
#include "podofo/base/PdfColor.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfRect.h"
#include "podofo/base/PdfString.h"
#include "podofo/doc/PdfFont.h"
#include "podofo/doc/PdfImage.h"
#include "podofo/doc/PdfPage.h"
#include "podofo/doc/PdfPainter.h"
#include "podofo/doc/PdfTable.h"

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-generic.h"

namespace PoDoFo {

PoDoFo::PdfTableModel::PdfTableModel(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfTableModel::PdfTableModel(PdfTableModel&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfTableModel::~PdfTableModel() {
  __zz_cib_MyHelper::__zz_cib_ReleaseProxy(this);
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfTableModel::PdfTableModel()
  : PoDoFo::PdfTableModel(__zz_cib_MyHelper::__zz_cib_New_0(this))
{}
}
namespace PoDoFo {

PoDoFo::PdfSimpleTableModel::PdfSimpleTableModel(__zz_cib_AbiType h)
  : ::PoDoFo::PdfTableModel(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class474(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfSimpleTableModel::PdfSimpleTableModel(PdfSimpleTableModel&& rhs)
  : ::PoDoFo::PdfTableModel(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfSimpleTableModel::PdfSimpleTableModel(const ::PoDoFo::PdfSimpleTableModel& __zz_cib_param0)
  : PoDoFo::PdfSimpleTableModel(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfSimpleTableModel::PdfSimpleTableModel()
  : PoDoFo::PdfSimpleTableModel(__zz_cib_MyHelper::__zz_cib_New_1())
{}

PoDoFo::PdfSimpleTableModel::PdfSimpleTableModel(int nCols, int nRows)
  : PoDoFo::PdfSimpleTableModel(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(nCols)>(std::move(nCols)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nRows)>(std::move(nRows))))
{}

PoDoFo::PdfSimpleTableModel::~PdfSimpleTableModel() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_3(
    h
  );
}

void PoDoFo::PdfSimpleTableModel::SetFont(::PoDoFo::PdfFont* pFont) {
    __zz_cib_MyHelper::SetFont_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pFont)>(std::move(pFont))
    );
  }

void PoDoFo::PdfSimpleTableModel::SetAlignment(::PoDoFo::EPdfAlignment eAlignment) {
    __zz_cib_MyHelper::SetAlignment_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eAlignment)>(std::move(eAlignment))
    );
  }

void PoDoFo::PdfSimpleTableModel::SetAlignment(::PoDoFo::EPdfVerticalAlignment eAlignment) {
    __zz_cib_MyHelper::SetAlignment_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eAlignment)>(std::move(eAlignment))
    );
  }

void PoDoFo::PdfSimpleTableModel::SetBackgroundColor(const ::PoDoFo::PdfColor& rColor) {
    __zz_cib_MyHelper::SetBackgroundColor_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rColor)>(rColor)
    );
  }

void PoDoFo::PdfSimpleTableModel::SetForegroundColor(const ::PoDoFo::PdfColor& rColor) {
    __zz_cib_MyHelper::SetForegroundColor_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rColor)>(rColor)
    );
  }

void PoDoFo::PdfSimpleTableModel::SetBackgroundEnabled(bool bEnable) {
    __zz_cib_MyHelper::SetBackgroundEnabled_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bEnable)>(std::move(bEnable))
    );
  }

void PoDoFo::PdfSimpleTableModel::SetWordWrapEnabled(bool bEnable) {
    __zz_cib_MyHelper::SetWordWrapEnabled_10<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bEnable)>(std::move(bEnable))
    );
  }

void PoDoFo::PdfSimpleTableModel::SetBorderEnabled(bool bEnable) {
    __zz_cib_MyHelper::SetBorderEnabled_11<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bEnable)>(std::move(bEnable))
    );
  }

void PoDoFo::PdfSimpleTableModel::SetBorderWidth(double dWidth) {
    __zz_cib_MyHelper::SetBorderWidth_12<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dWidth)>(std::move(dWidth))
    );
  }

void PoDoFo::PdfSimpleTableModel::SetText(int col, int row, const ::PoDoFo::PdfString& rsString) {
    __zz_cib_MyHelper::SetText_13<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rsString)>(rsString)
    );
  }

::PoDoFo::PdfString PoDoFo::PdfSimpleTableModel::GetText(int col, int row) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfString>(
    __zz_cib_MyHelper::GetText_14<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfString>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
    )
  );
}

::PoDoFo::EPdfAlignment PoDoFo::PdfSimpleTableModel::GetAlignment(int col, int row) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfAlignment>(
    __zz_cib_MyHelper::GetAlignment_15<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfAlignment>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
    )
  );
}

::PoDoFo::EPdfVerticalAlignment PoDoFo::PdfSimpleTableModel::GetVerticalAlignment(int col, int row) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfVerticalAlignment>(
    __zz_cib_MyHelper::GetVerticalAlignment_16<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfVerticalAlignment>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
    )
  );
}

::PoDoFo::PdfFont* PoDoFo::PdfSimpleTableModel::GetFont(int col, int row) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFont*>(
    __zz_cib_MyHelper::GetFont_17<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfFont*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
    )
  );
}

bool PoDoFo::PdfSimpleTableModel::HasBackgroundColor(int col, int row) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::HasBackgroundColor_18<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
    )
  );
}

::PoDoFo::PdfColor PoDoFo::PdfSimpleTableModel::GetBackgroundColor(int col, int row) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfColor>(
    __zz_cib_MyHelper::GetBackgroundColor_19<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfColor>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
    )
  );
}

::PoDoFo::PdfColor PoDoFo::PdfSimpleTableModel::GetForegroundColor(int col, int row) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfColor>(
    __zz_cib_MyHelper::GetForegroundColor_20<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfColor>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
    )
  );
}

bool PoDoFo::PdfSimpleTableModel::HasWordWrap(int col, int row) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::HasWordWrap_21<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
    )
  );
}

bool PoDoFo::PdfSimpleTableModel::HasBorders() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::HasBorders_22<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfSimpleTableModel::GetBorderWidth() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetBorderWidth_23<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfColor PoDoFo::PdfSimpleTableModel::GetBorderColor(int col, int row) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfColor>(
    __zz_cib_MyHelper::GetBorderColor_24<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfColor>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
    )
  );
}

bool PoDoFo::PdfSimpleTableModel::HasImage(int col, int row) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::HasImage_25<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
    )
  );
}

::PoDoFo::PdfImage* PoDoFo::PdfSimpleTableModel::GetImage(int col, int row) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfImage*>(
    __zz_cib_MyHelper::GetImage_26<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfImage*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfTable::PdfTable(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

PoDoFo::PdfTable::PdfTable(PdfTable&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfTable::PdfTable(const ::PoDoFo::PdfTable& __zz_cib_param0)
  : PoDoFo::PdfTable(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfTable::PdfTable(int nCols, int nRows)
  : PoDoFo::PdfTable(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(nCols)>(std::move(nCols)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nRows)>(std::move(nRows))))
{}

PoDoFo::PdfTable::~PdfTable() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

void PoDoFo::PdfTable::Draw(double dX, double dY, ::PoDoFo::PdfPainter* pPainter, const ::PoDoFo::PdfRect& rClipRect, double* pdLastX, double* pdLastY) {
    __zz_cib_MyHelper::Draw_3<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX)>(std::move(dX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY)>(std::move(dY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pPainter)>(std::move(pPainter)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rClipRect)>(rClipRect),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pdLastX)>(std::move(pdLastX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pdLastY)>(std::move(pdLastY))
    );
  }

double PoDoFo::PdfTable::GetWidth(double dX, double dY, ::PoDoFo::PdfCanvas* pPage) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetWidth_4<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX)>(std::move(dX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY)>(std::move(dY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage))
    )
  );
}

double PoDoFo::PdfTable::GetHeight(double dX, double dY, ::PoDoFo::PdfCanvas* pPage) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetHeight_5<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX)>(std::move(dX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY)>(std::move(dY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage))
    )
  );
}

void PoDoFo::PdfTable::SetModel(::PoDoFo::PdfTableModel* pModel) {
    __zz_cib_MyHelper::SetModel_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pModel)>(std::move(pModel))
    );
  }

const ::PoDoFo::PdfTableModel* PoDoFo::PdfTable::GetModel() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfTableModel*>(
    __zz_cib_MyHelper::GetModel_7<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfTableModel*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfTable::SetColumnWidths(double* pdWidths) {
    __zz_cib_MyHelper::SetColumnWidths_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pdWidths)>(std::move(pdWidths))
    );
  }

void PoDoFo::PdfTable::SetRowHeights(double* pdHeights) {
    __zz_cib_MyHelper::SetRowHeights_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pdHeights)>(std::move(pdHeights))
    );
  }

void PoDoFo::PdfTable::SetColumnWidth(double dWidth) {
    __zz_cib_MyHelper::SetColumnWidth_10<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dWidth)>(std::move(dWidth))
    );
  }

void PoDoFo::PdfTable::SetRowHeight(double dHeight) {
    __zz_cib_MyHelper::SetRowHeight_11<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dHeight)>(std::move(dHeight))
    );
  }

void PoDoFo::PdfTable::SetTableWidth(double dWidth) {
    __zz_cib_MyHelper::SetTableWidth_12<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dWidth)>(std::move(dWidth))
    );
  }

void PoDoFo::PdfTable::SetTableHeight(double dHeight) {
    __zz_cib_MyHelper::SetTableHeight_13<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dHeight)>(std::move(dHeight))
    );
  }

void PoDoFo::PdfTable::SetAutoPageBreak(bool bPageBreak, ::PoDoFo::PdfTable::CreatePageCallback callback, void* pCustomData) {
    __zz_cib_MyHelper::SetAutoPageBreak_14<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bPageBreak)>(std::move(bPageBreak)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(callback)>(std::move(callback)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pCustomData)>(std::move(pCustomData))
    );
  }

bool PoDoFo::PdfTable::GetAutoPageBreak() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::GetAutoPageBreak_15<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int PoDoFo::PdfTable::GetCols() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::GetCols_16<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int PoDoFo::PdfTable::GetRows() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::GetRows_17<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfTable::CalculateTableSize(const double dX, const double dY, const ::PoDoFo::PdfCanvas* pCanvas, double* pdWidths, double* pdHeights, double* pdWidth, double* pdHeight) const {
    __zz_cib_MyHelper::CalculateTableSize_18<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX)>(std::move(dX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY)>(std::move(dY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pCanvas)>(std::move(pCanvas)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pdWidths)>(std::move(pdWidths)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pdHeights)>(std::move(pdHeights)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pdWidth)>(std::move(pdWidth)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pdHeight)>(std::move(pdHeight))
    );
  }

void PoDoFo::PdfTable::DrawHorizontalBorders(int nRow, double dX, double dY, ::PoDoFo::PdfPainter* pPainter, double* pdColWidths) {
    __zz_cib_MyHelper::DrawHorizontalBorders_19<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nRow)>(std::move(nRow)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX)>(std::move(dX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY)>(std::move(dY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pPainter)>(std::move(pPainter)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pdColWidths)>(std::move(pdColWidths))
    );
  }

bool PoDoFo::PdfTable::CheckForNewPage(double* pdY, double* pdCurY, double dRowHeight, ::PoDoFo::PdfPainter* pPainter) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::CheckForNewPage_20<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pdY)>(std::move(pdY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pdCurY)>(std::move(pdCurY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dRowHeight)>(std::move(dRowHeight)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pPainter)>(std::move(pPainter))
    )
  );
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<>
class __zz_cib_Generic<::PoDoFo::PdfTableModel> : public ::PoDoFo::PdfTableModel {
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class474::__zz_cib_MethodId;
  static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_CibPoDoFoGetMethodTable(
      __zz_cib_ids::__zz_cib_Class333::__zz_cib_Class474::__zz_cib_classId));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::PoDoFo::PdfTableModel(h) {}
public:
  static ::PoDoFo::PdfTableModel* __zz_cib_FromHandle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  bool HasImage(int col, int row) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::HasImage_13>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  ::PoDoFo::PdfColor GetBorderColor(int col, int row) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfColor>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfColor>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetBorderColor_12>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  double GetBorderWidth() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetBorderWidth_11>(
        __zz_cib_h
      )
    );
  }
  bool HasBorders() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::HasBorders_10>(
        __zz_cib_h
      )
    );
  }
  ::PoDoFo::PdfColor GetForegroundColor(int col, int row) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfColor>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfColor>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetForegroundColor_8>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  bool HasWordWrap(int col, int row) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::HasWordWrap_9>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  ::PoDoFo::PdfString GetText(int col, int row) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfString>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfString>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetText_2>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  ::PoDoFo::EPdfVerticalAlignment GetVerticalAlignment(int col, int row) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::EPdfVerticalAlignment>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<::PoDoFo::EPdfVerticalAlignment>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetVerticalAlignment_4>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  ::PoDoFo::PdfFont* GetFont(int col, int row) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfFont*>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfFont*>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetFont_5>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  ::PoDoFo::PdfImage* GetImage(int col, int row) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfImage*>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfImage*>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetImage_14>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  bool HasBackgroundColor(int col, int row) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::HasBackgroundColor_6>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  ::PoDoFo::EPdfAlignment GetAlignment(int col, int row) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::EPdfAlignment>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<::PoDoFo::EPdfAlignment>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetAlignment_3>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  ::PoDoFo::PdfColor GetBackgroundColor(int col, int row) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfColor>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfColor>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetBackgroundColor_7>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_Helper<::PoDoFo::PdfTableModel>::__zz_cib_ReleaseHandle(this);
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_1>(
      __zz_cib_h
    );
  }
};
}

namespace __zz_cib_ {
template<>
::PoDoFo::PdfTableModel* __zz_cib_Helper<::PoDoFo::PdfTableModel>::__zz_cib_CreateProxy(__zz_cib_AbiType h) {
  switch(__zz_cib_GetClassId(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class475::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfSimpleTableModel>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfSimpleTableModel>::__zz_cib_CastFrom__zz_cib_Class474(h)
    );
  default: break;
  }
  auto* const __zz_cib_obj = ::__zz_cib_::__zz_cib_Generic<::PoDoFo::PdfTableModel>::__zz_cib_FromHandle(h);
  return __zz_cib_obj;
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfTableModel> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfTableModel;
  static __zz_cib_AbiType_t<bool> __zz_cib_decl HasImage_0(const ::PoDoFo::PdfTableModel* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->HasImage(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfColor> __zz_cib_decl GetBorderColor_1(const ::PoDoFo::PdfTableModel* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfColor>(
      __zz_cib_obj->GetBorderColor(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetBorderWidth_2(const ::PoDoFo::PdfTableModel* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetBorderWidth()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl HasBorders_3(const ::PoDoFo::PdfTableModel* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->HasBorders()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfColor> __zz_cib_decl GetForegroundColor_4(const ::PoDoFo::PdfTableModel* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfColor>(
      __zz_cib_obj->GetForegroundColor(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl HasWordWrap_5(const ::PoDoFo::PdfTableModel* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->HasWordWrap(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfString> __zz_cib_decl GetText_6(const ::PoDoFo::PdfTableModel* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfString>(
      __zz_cib_obj->GetText(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfVerticalAlignment> __zz_cib_decl GetVerticalAlignment_7(const ::PoDoFo::PdfTableModel* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfVerticalAlignment>(
      __zz_cib_obj->GetVerticalAlignment(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfFont*> __zz_cib_decl GetFont_8(const ::PoDoFo::PdfTableModel* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfFont*>(
      __zz_cib_obj->GetFont(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfImage*> __zz_cib_decl GetImage_9(const ::PoDoFo::PdfTableModel* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfImage*>(
      __zz_cib_obj->GetImage(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl HasBackgroundColor_10(const ::PoDoFo::PdfTableModel* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->HasBackgroundColor(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfAlignment> __zz_cib_decl GetAlignment_11(const ::PoDoFo::PdfTableModel* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfAlignment>(
      __zz_cib_obj->GetAlignment(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfColor> __zz_cib_decl GetBackgroundColor_12(const ::PoDoFo::PdfTableModel* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfColor>(
      __zz_cib_obj->GetBackgroundColor(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static void __zz_cib_decl __zz_cib_Delete_13(::PoDoFo::PdfTableModel* __zz_cib_obj) {
    __zz_cib_Helper_t<::PoDoFo::PdfTableModel>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class474 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::HasImage_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::GetBorderColor_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::GetBorderWidth_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::HasBorders_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::GetForegroundColor_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::HasWordWrap_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::GetText_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::GetVerticalAlignment_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::GetFont_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::GetImage_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::HasBackgroundColor_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::GetAlignment_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::GetBackgroundColor_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::__zz_cib_Delete_13)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 14 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfTableModel>::__zz_cib_GetProxyMethodTable() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class474::__zz_cib_GetMethodTable();
}
}

