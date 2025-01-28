class InvalidAgeException extends Exception
{

InvalidAgeException(String str)

    {
    super(str);
    }

}

class TryException{

public void TryExceptionHandling(int age) throws InvalidAgeException{

if(age<18){
 
throw new InvalidAgeException("Invalid Age");

}else{

System.out.println("You can vote");
}

}

}

class Exhandl{

public static void main(String args[]){

TryException obj=new TryException();

try{
obj.TryExceptionHandling(25);
}
catch(InvalidAgeException ex){

System.out.println("Exception occured: " + ex.getMessage());  
}

System.out.println("Rest of the code");  
}

}