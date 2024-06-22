/*
-------------------------------------
			Operators overloading rules:
1. Only existing operators can be overloaded, it's impossible to create new operators:
	+	- overloadable;
	++  - overloadable;
	%  - overloadable;
	%%  - No overloadable;

2. Not all existing operators can be overloaded; they are,
   Not overloaded;
   ?:-Conditional Tenary Operator;
   ::- Scope Operator;
   . - Point operator;
   .* - Pointer to member selection;
   # - Preprocessor convert to string;
   ## - Preprocessor concatenate;

3. Overloaded operators obay priority;

4. It is impossible to override the behavior of operators on built in types;
   
   type operator@(parameters)
   {
   .....;
     groupe_of_statements;
	 ....;
   }
-------------------------------------
*/

/*operator type() const;
{
    .............;
	conversion_code;
	............;
	return value
}
*/