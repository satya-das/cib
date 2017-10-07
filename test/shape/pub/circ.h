#pragma once

#include "shape.h"
#include "context.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

namespace Graphics {
   class Context;
   /**
    * \brief Represents a rectangle.
    */
   class Circle : public Shape
   {
	   float Ox_, Oy_, radius_;

   public:
	   Circle(float Ox, float Oy, float radius)
         : Ox_(Ox), Oy_(Oy), radius_(radius)
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
