
	The functions are used to attend the next level of reusability

		code rep. in program ------> if Conti.rep ==> Use Loops
					|
					|---> conti./ discrete rep ===> function

	FUNCTION Def: It is the group of instructions, designed/ written to perform the specific task.

	How To Write a Function?

		There are three different steps

		 - Decl.: To inform to the compiler.
			syntax:
			   <ret_type> <fun_nm>(<argu_if_any>);

		 - Calling: To Use the function/ execute the code
			syntax:
			   <fun_nm>(<argu_if_any>);

		 - Def: Actual set of instructions
			syntax:
			   <ret_type> <fun_nm>(<argu_if_any>)
			   {
				--------------;
				--------------;
				--------------;
				--------------;
				--------------;
			  }


			  // Different Types Of Functions

                                    Function
			                         |
                            ---------------------------------------
                            |				                       |
	                 User-Defined			                    Built-in
	       |				                                       |
  -----------------------------	 	        -----------------------------------------------------------------
  |	    |	    |	    |      |		         |		          |		         |	          	|		|
  I    II      III     IV      V             Math related     Graphics        IO related      String related  .....
					       math.h	         graphics.h     stdio.h/conio.h	   String.h


 - Built-in: These fuctions are provided with the compiler. Any language consists of Editor, Compiler, Library,
	     documentation and more..., All built-in functions are the part of library. and the are grouped together
	     into header files.

 - User-Defined Functions: These functions are defined by the user of language.(programmer)
			    There are following types of UDF

			I] simple function (function without argument without return type)
			II] function with argument without return type
			III] function without argument with return type
			IV] function with argument with return type
			V] Recursion
