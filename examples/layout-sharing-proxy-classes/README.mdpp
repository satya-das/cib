## Layout Sharing Proxy

For simple class with standard layout having isolated proxy class can be too much overhead and may be avoidable performance penalty.
So, if the library author can guarantee that internal object layout will not change between releases then CIB can generate glue code to use same object layout for both original and proxy classes.
Such proxy class are called layout sharing proxy class. Layout sharing proxy class can be meaningful for classes that do not have any virtual table and also the class definition should be such that the compiler of both library and client deduce the same object size.

