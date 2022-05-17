#include<iostream>
#include <string>
#include <iomanip>
#include "online teacher training.h"
using namespace std;

//-----Prototype Classes-----

class Course;
class Schedule;
class Resources;
class Student;
class Technician;
class Instructor;
class Administrator;
class Support;
class Exam;
class User;
class UserActivity;
class Register;
class Visitor;

int main(){
//constructor Course
   Course *c1 = new Course("CC001","Basic Training Certificate","EKcc001","Certificate Course");
    c1->displayCourseDetails();
    c1->addNewCourses();
    c1-> genarateCourseCertificate();
   Course *c2 = new Course("CC002","Primary Training Certificate","EKcc002","Certificate course");
    c2->displayCourseDetails();
    c2->addNewCourses();
    c2-> genarateCourseCertificate();
 
  //constructor Schedule
   Schedule *s1 = new Schedule(001,"Schedule 01","Lectures");
     s1->displaySchedule();
     s1->setSessionDetails();
     s1->addSession();
    Schedule *s2 = new Schedule(002,"Schedule 02","labs");
     s2->displaySchedule();
     s2->setSessionDetails();
     s2->addSession();
    Schedule *s3 = new Schedule(003,"Schedule 03","Revision");
      s3->displaySchedule();
      s3->setSessionDetails();
      s3->addSession();
  //constructor Resources
   Resources *r1 = new Resources("R5141","Teach Like a Pride","E-book");
        r1-> addNewResource();
       	r1-> displayResources();
   Resources *r2 = new Resources("R5142","The freedom writer diary","Magazine");
         r2-> addNewResource();
       	r2-> displayResources();
  //constrctor Student 
  Student *n1 = new Student("BT02347121","Shaliniya Imeshini","200201456155","1999-05-03",c1);
     n1->displayStudentDetails();
     n1-> markStudentParticipation();
     n1-> askQuestions();
   Student *n2 = new Student("BT04184810","Ovini Yazara'","1998153601V","1997-08-20",c2);
     n2->displayStudentDetails();
     n2-> markStudentParticipation();
     n2-> askQuestions();
   Student *n3 = new Student("DE01053443","Lakindu Gathsara","200130002616","1990-10-12",c1);
     n3->displayStudentDetails();
     n3-> markStudentParticipation();
     n3-> askQuestions();
  //constructor Technician
  Technician *t1 = new Techncian("Tec01","Gaveesh Nuwan","0119988822");
      t1->displayTechicianDetails();
      t1-> addNewTechnician();
      t1-> sendNotification();
      t1-> setNewFeature();
   Technician *t2 = new Techncian("Tec02","Suren Kamishka","0119988823");
       t2->displayTechicianDetails();
      t2-> addNewTechnician();
      t2-> sendNotification();
      t2-> setNewFeature();
  //constructor Instructor
  Instructor *i1 = new Instructor("In1001","Thisara Dewind","0771019977",c1);
      i1->displayInstructorDetails();
       i1->getparticiipation();
       i1-> addNewInstructors();
      i1->setInstructorActivities();
   Instructor *i2 = new Instructor("In1002","Sachintha hasaranga","0773321546",c2);
     i2->displayInstructorDetails();
       i2->getparticiipation();
       i2-> addNewInstructors();
      i2->setInstructorActivities();
    Instructor *i3 = new Instructor("In1003","Rivi Abhishek","0766998881",c2);
     i3->displayInstructorDetails();
       i3->getparticiipation();
       i3-> addNewInstructors();
      i3->setInstructorActivities();
  //constructor Administrator
  Administrator *a1 = new Administrator("A0001'","Oshan Dias","0778991001","68195662V");
       a1->displayAdminDetails();
		   a1->postAnswers(string a_id,Support *sp);
		   a1-> uploadResources();
       a1->maintainSystemData();

  //constractor support
  Support *sp1 = new Support("Q1531","2022-03-15",a1);
        sp1-> displayQuestion();
        sp1-> postQuestion();
        sp1-> replyToCustomers();
  Support *sp2 = new Support("Q1532","2022-03-15",a1);
        sp2-> displayQuestion();
        sp2-> postQuestion();
        sp2-> replyToCustomers();
   
  //constractor Exam
  Exam *e1 = new Exam("E0001","Spot test","Written","2022-10-02");
    e1->setExamGrade(string e_id,string e_name, char gr,Course *c);
    e1-> getExamParticipation();
    e1-> displayExamDetails();
    e1-> displayExamGrade();
  Exam *e2 = new Exam("E0002","Quiz","Online","2022-07-15");
    e2->setExamGrade(string e_id,string e_name, char gr,Course *c);
    e2-> getExamParticipation();
    e2-> displayExamDetails();
    e2-> displayExamGrade();
  
  //constractor User
  User *u1 = new User("shaliimeshi@gmail.com","Iloveteacher001",ua1);
     u1->setEmail(string em);
     u1-> setPassword(string pswd);
     u1-> verifyLogin();
  
    User *u2 = new User("ovins@yahoo.com","Blackeyes534",ua2);
    u2->setEmail(string em);
     u2-> setPassword(string pswd);
     u2-> verifyLogin();
    User *u3 = new User("Lakindu004@gmail.com","Sleepingbeauty@3",ua3);
    u3->setEmail(string em);
     u3-> setPassword(string pswd);
     u3-> verifyLogin();
 
  //constractor UserActivity
     UserActivity *ua1 = new UserActivity("17:00:00","14:45:00","Offline");
      ua1->getLastLogin();
      ua1-> getTimeLogged();
      ua1-> getLoginStatus();
  
  UserActivity *ua2 = new UserActivity("20:00:00","19:45:00","Offline");
       ua2->getLastLogin();
      ua2-> getTimeLogged();
      ua2-> getLoginStatus();
  
  UserActivity *ua3 = new UserActivity("16:00:00","","Online");
        ua3->getLastLogin();
      ua3-> getTimeLogged();
      ua3-> getLoginStatus();
  
  //constractor Register
  Register *rg1 = new Register(u1,"Shaliniya","Imeshini","2012-07-10");
      rg1->login();
    Register *rg1 = new Register(u1,"Ovini","Yazara","2010-04-14");
      rg1->login();
    Register *rg1 = new Register(u1,"Lakindu","Gathsara","2020-02-05");
     rg1->login();
  //constractor Visitor
  Visitor *v1 = new Visitor("Janka Pruthuvi");
        v1-> signUp(string nm, Register *rg);
        v1-> viewCourse();
  Visitor *v2 = new Visitor("Deshitha Thejan");
        v2->signUp(string nm, Register *rg);
        v2-> viewCourse();
}



