class Course {
private:
	string courseName;
	int courseCode;
	int courseHours;
	Professor prof;
	vector <Course> course;
	vector 	<Student> student;
public:
     Course (){}
     void set_course(const vector<Course> & x) {
         course = x;

     }
     vector<Course> get_course() {

         return course;
     }
     void set_student(const vector<Student>& y) {
         student = y;

     }
     vector<Student> get_student() {

         return student;
     }
     int get_courseCode()
     {
         return courseCode;
     }
     void set_courseCode(int ccode)
     {
         ccode = courseCode;
     }
     string get_courseName()
     {
         return courseName;
     }
     void set_courseName(string cname)
     {
         courseName = cname;
     }
     int get_courseHours()
     {
         return courseHours;
     }
     void set_courseHours(int hours)
     {

         courseHours = hours;
     }



};
