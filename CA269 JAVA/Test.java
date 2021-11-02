// You are to write a method which will accept an array of students and will print out all students who have a mark of 55 or greater.

// Same method as Reverse However here we are gonna use getmark() to print the students grades.
//
public class Test
{
    // Add a static print method to this class.
    public static void print(Student [] students){

        student_len = student.length;
        for(int index = 0; index < student_len;index++){
            //students who have a mark of 55 or greater
            if (students[index].getMark() >= 55){
                // Printing out the name and marks with the function getMark and getName
                System.out.println(students[index].getMark() +" (" + students[index].getName() + ")");
            }
        }
    }
}























// A Student is defined by the following Java class:

// public class Student
// {
//    private String name;
//    private int mark;

//    public Student(String n, int m)
//    {
//       name = n;
//       mark = m;
//    }

//    public String getName()
//    {
//       return name;
//    }

//    public int getMark()
//    {
//       return mark;
//    }
// }
