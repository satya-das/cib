#pragma once

#include "shape.h"
#include "context.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

namespace Graphics {
   /**
    * \brief Represents a rectangle.
    */
   class Rectangle : public Shape
   {
	   float left_, top_, right_, bottom_;

   public:
	   Rectangle(float left, float top, float right, float bottom)
         : left_(left), top_(top), right_(right), bottom_(bottom)
      {
	   }
	   /**
	    * @return Area of this shape object.
	    */
	   virtual float Area() const;
	   /**
	    * @return Perimeter of this shape object.
	    */
	   virtual float Perimeter() const;
	   /**
	    * Draws this shape on a given device context.
	    */
	   virtual void Draw(Context* ctx) const;
   };
}
