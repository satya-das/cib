## Force Make Interface Class

// I class without pure virtual method can still be used as an interface class.
// As client can override virtual method and library can end up calling client code.
// CIB by default only recognizes those classes as interface that have at least one pure virtual method.
