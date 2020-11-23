#include "A.h"

void Circle::Draw(Context* pCtx) const {
    pCtx->DrawCircle(mRadius);
}
