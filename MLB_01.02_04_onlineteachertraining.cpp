#include<iostream>
#include"online teacher training.h"
using std::string;

//-----Implementing Functions----
//class Course
Course::Course(string id, string name, sring key, string type,Instructor *i,Student *s,Resources *r){
	courseId = id;
	courseName = name;
	enrollKey = key;
	courseType = type;
  ins = i;
  stu = s;
  res = r;
}
void Course::displayCourseDetails(){
	cout<<"Course ID: "<<courseId<<endl;
	cout<<"Course Name: "<<courseName<<endl;
	cout<<"Enroll Key: "<<enrollKey<<endl;
	cout<<"Course Type: "<<courseType<<endl;
}
void Course::addNewCourses(){
	cout<<"Input Course ID: ";
	cin>>courseId;
	cout<<"Input Course Name: ";
	cin>>courseName;
	cout<<"Input Enroll Key: ";
	cin>>enrollKey;
	cout<<"Input Course Type: ";
	cin>>courseType;
}
void Course:: genarateCourseCertificate(string id, string name, string type, string c_no, string c_name, string c_date){}
Course::~Course(){}

//class Schedule
Schedule::Schedule(int s_no, string s_name, string s_type){
	  scheduleNo = s_no;
    scheduleName = s_name;
    scheduleType = s_type;
}
void Schedule::displaySchedule(){
	cout<<"Schedule Number: "<<scheduleNo<<endl;
	cout<<"Schedule Name: "<<scheduleName<<endl;
	cout<<"Schedule Type: "<<scheduleType<<endl;
}
void Schedule::setSessionDetails(int s_id, string se_name,Course *c){}
void Schedule::addSession(){
	cout<<"Input Schedule Number: ";
	cin>>scheduleNo;
	cout<<"Input Schedule Name: ";
	cin>>scheduleName;
	cout<<"Input Schedule Type: ";
	cin>>scheduleType;
}
Schedule::~Schedule(){}

//class Resources
Schedule::Resources(string r_id, string r_name, string r_type){
	resourceId = r_id;
    resourceName = r_name;
    resourceType = r_type;
}
void Schedule::addNewResource(){
	cout<<"Input Resource ID: ";
	cin>>resourceId;
	cout<<"Input Resource Name: ";
	cin>>resourceName;
	cout<<"Input Resource Type: ";
	cin>>resourceType;
}
void Schedule::displayResources(){
	cout<<"Resource ID: "<<resourceId<<endl;
	cout<<"Resource Name: "<<resourceName<<endl;
	cout<<"Resource Type: "<<resourceType<<endl;
}
Resources::~Resources(){}

//class Student
Student::Student(string s_id, string s_name, int s_nic, string s_dob,Course *c,string em, string pswd,Register *rg,UserActivity *ua:):User(em,pswd,*rg,*ua){
	studentId = s_id;
    studentName = s_name;
    studentNIC = s_nic;
    studentDateOfBirth = s_dob;
  cour = c;
}
void Student::displayStudentDetails(){
	cout<<"Student ID: "<<studentId<<endl;
	cout<<"Student Name: "<<studentName<<endl;
	cout<<"Student NIC: "<<studentNIC<<endl;
	cout<<"Student Date of Birth: "<<studentDateOfBirth<<endl;
}
void Student::markStudentParticipation(string s_id, string s_name, int s_nic,string m_name, string a_date){}
void Student::askQuestions(string s_id, string s_name, string stq_no,Support *sp){}
Student::~Student(){}

//class Technician
Technician::Technician(string t_id, string t_name, int t_contact,string em, string pswd,Register *rg,UserActivity *ua:):User(em,pswd,*rg,*ua){
	technicianId = t_id;
    technicianName = t_name;
    technicianContact = t_contact;
}
void Technician::addNewTechnician(){
	cout<<"Input Technician ID: ";
	cin>>technicianId;
	cout<<"Input Technician Name: ";
	cin>>technicianName;
	cout<<"Input Technician Contact Number: ";
	cin>>technicianContact;
}
void Technician::sendNotification(string t_id, string t_name,int n_no){
	technicianId = t_id;
    technicianName = t_name;
    notificatonNo = n_no;
}
void Technician::setNewFeature(){}
Technician::~Technician();

//class Instructor
Instructor::Instructor(string i_id, string i_name, int i_contactno,Course *c,string em, string pswd,Register *rg,UserActivity *ua:):User(em,pswd,*rg,*ua){
	instructorId = i_id;
    intructorName = i_name;
    instructorContactNo = i_contactno;
   cour = c;
}
void Instructor::displayInstructorDetails(){
	cout<<"Instructor ID: "<<instructorId<<endl;
	cout<<"Instructor Name: "<<intructorName<<endl;
	cout<<"Instructor Contact number: "<<instructorContactNo<<endl;
}
void Instructor::getparticiipation(){}
void Instructor::addNewInstructors(){
	cout<<"Input Instructor ID: ";
	cin>>instructorId;
	cout<<"Input Instructor Name: ";
	cin>>intructorName;
	cout<<"Input Instructor Contact Number: ";
	cin>>instructorContactNo;
}
void Instructor::setInstructorActivities(){}
Instructor::~Instructor(){}

//class Administrator
Administrator::Administrator(string a_id,string a_name,int a_contact, int a_nic,string em, string pswd,Register *rg,UserActivity *ua:):User(em,pswd,*rg,*ua){
	administratorId = a_id;
    administratorName = a_name;
    adminContact = a_contact;
    adminNIC = a_nic;
}
void Administrator::displayAdminDetails(){
	cout<<"Student ID: "<<administratorId<<endl;
	cout<<"Student Name: "<<administratorName<<endl;
	cout<<"Student NIC: "<<adminContact<<endl;
	cout<<"Student Date of Birth: "<<adminNIC<<endl;
}
	void postAnswers(string a_id,Support *sp);

Administrator::~Administrator(){}

//class Support
Support::Support(int q_no, string q_date,Administrator *a){
	questionNo = q_no;
    questionDate = q_date;
   admin = a;
}
void Support::displayQuestion(){
	cout<<"Question Number: "<<questionNo<<endl;
	cout<<"Question Date: "<<questionDate<<endl;
}
void Support::postQuestion(){}
void Support::replyToCustomers(){}
Support::~Support(){}

//class Exam
Exam::Exam(string e_id, string e_name, string e_type, string e_date){
	examId = e_id;
    examName = e_name;
    examType = e_type;
    examDate = e_date;
}
void Exam::setExamGrade(string e_id,string e_name, char gr,Course *c){
	examId = e_id;
    examName = e_name;
    grade = gr;
  cour = c;
}
void Exam::getExamParticipation(){}
void Exam::displayExamDetails(){
	cout<<"Exam ID: "<<examId<<endl;
	cout<<"Exam Name: "<<examName<<endl;
	cout<<"Exam type: "<<examType<<endl;
	cout<<"Exam Date: "<<examDate<<endl;
}
void Exam::displayExamGrade(){
	cout<<"Exam ID: "<<examId<<endl;
	cout<<"Exam Name: "<<examName<<endl;
	cout<<"Grade: "<<grade<<endl;
}
Exam::~Exam(){}

//class User
User::User(string em, string pswd,Register *rg,UserActivity *ua){
	email = em;
    password = pswd;
   reg = rg;
    useract = ua;
}
void User::setEmail(string em){
	email = em;
}
void User::setPassword(string pswd){
	password = pswd;
}
string User::verifyLogin(){}
User::~User(){}

//class UserActivity
UserActivity::UserActivity(string ll, string tl,string ls){
	lastLogin = ll;
    timeLogged = tl;
    loginStatus = ls;
}
string UserActivity::getLastLogin(){}
string UserActivity::getTimeLogged(){}
string UserActivity::getLoginStatus(){}
UserActivity::~UserActivity(){}

//class Register
Register::Register(string r_email, string f_name, string l_name,string r_pswd, string r_date){
	registerEmail = r_email;
    firstName = f_name;
    lastName = l_name;
	registerPassword = r_pswd;
    registerDate = r_date;
}
void Register::login(){}
Register::~Register(){}

//class Visitor
Visitor::Visitor(string v_name){
	name = v_name;
}
void Visitor::signUp(string nm, Register *rg){}
void Visitor::viewCourse(){}
Visitor::~Visitor(){}



