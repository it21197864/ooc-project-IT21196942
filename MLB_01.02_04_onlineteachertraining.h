#include<iostream>
using std::string;

//-----Implementing Classes-----

//class Course
class Course{
	protected:
		string courseId;
		string courseName;
		string enrollKey;
		string courseType;
		string certificateNo;
		string certificateName;
		string certificateDate; 
		Instructor *instructor;//BI-DIRECTIONAL ASSOCIATION
		Student *student;//BI-DIRECTIONAL ASSOCIATION
		Resources *resources;//UNI-DIRECTIONAL
		
	public:
		Course();
		Course(string id, string name, sring key, string type,Instructor *i,Student *s,Resources *r);
		void displayCourseDetails();
		void addNewCourses();
		void genarateCourseCertificate(string id, string name, string type, string c_no, string c_name, string c_date); 
		~Course();
};

//class schedule
class Schedule{
   private:
    	int scheduleNo;
      	string scheduleName;
      	string scheduleType;
      	int sessionId;
      	string sessionName;

    public:
    	Schedule();
    	Schedule(int s_no, string s_name, string s_type);
    	void displaySchedule();
    	void setSessionDetails(int s_id, string se_name,Course *c);
    	void addSession();
    	~Schedule();
};

//class Resources;
class Resources{
    private:
       string resourceId;
       string resourceName;
       string resourceType;

    public:
    	Resources();
    	Resources(string r_id, string r_name, string r_type);
       	void addNewResource();
       	void displayResources();
       	~Resources();
};

//class Student ;
class Student: public User{
   private:
       	string studentId;
       	string studentName;
       	int studentNIC;
       	string studentDateOfBirth;
       	string moduleName;
       	string attendDate;
       	int studentQuestionNo;
		    Course *course;//BI-DIRECTIONAL ASSOCIATION
       	
   public:
   		Student();
    	Student(string s_id, string s_name, int s_nic, string s_dob,Course *c,string em, string pswd,Register *rg,UserActivity *ua:):User(em,pswd,*rg,*ua);
        void displayStudentDetails();
        void markStudentParticipation(string s_id, string s_name, int s_nic,string m_name, string a_date);
        void askQuestions(string s_id, string s_name, string stq_no,Support *sp);
        ~Student();
};

//class Technician;
class Technician: public User{
    private:
    	string technicianId;
        string technicianName;
        int technicianContact;
        int notificatonNo;
        string newFeature;

    public:
    	Technician();
        Technician(string t_id, string t_name, int t_contact,string em, string pswd,Register *rg,UserActivity *ua:):User(em,pswd,*rg,*ua);
        void displayTechicianDetails();
        void addNewTechnician();
        void sendNotification(string t_id, string t_name,int n_no);
        void setNewFeature();
        ~Technician();
};

//class Instructor;
class Instructor: public User{
    private:
        string instructorId;
        string intructorName;
        int instructorContactNo;
		Course *course;//BI-DIRECTIONAL ASSOCIATION
        
    public:
    	Instructor();
        Instructor(string i_id, string i_name, int i_contactno,Course *c,string em, string pswd,Register *rg,UserActivity *ua):User(em,pswd,*rg,*ua);
        void displayInstructorDetails();a
        void getparticiipation();
        void addNewInstructors();
        void setInstructorActivities();
        ~Instructor();
};

//class Administrator;
class Administrator : public User{
    private:
        string administratorId;
        string administratorName;
        int adminContact;
        int adminNIC;
        Support *support;//UNI-DIRECTIONAL ASSOCIATION

    public:
    	Administrator();
        Administrator(string a_id,string a_name,int a_contact, int a_nic,string em, string pswd,Register *rg,UserActivity *ua:):User(em,pswd,*rg,*ua);
        void displayAdminDetails()
		void postAnswers(string a_id,Support *sp);
		void uploadResources();
        void maintainSystemData();
        ~Administrator();
};

//class Support;
class Support{
    private:
        int questionNo;
        string questionDate;
        
    public:
    	Support();
        Support(int q_no, string q_date,Administrator *a);
        void displayQuestion();
        void postQuestion();
        void replyToCustomers();
        ~Support();
};

//class Exam;
class Exam{
    private:
        string examId;
        string examName;
        string examType;
        char grade;
        string examDate;
     
    public:
    	Exam();
        Exam(string e_id, string e_name, string e_type, string e_date);
        void setExamGrade(string e_id,string e_name, char gr,Course *c);
        void getExamParticipation();
        void displayExamDetails();
        void displayExamGrade();
        ~Exam();
};

//class User;
class User{
    protected:
    	string email;
        string password;
		Register *register;//COMPOSITION
		UserActivity *useractivity;//COMPOSITION

    public:
    	User();
    	User(string em, string pswd,Register *rg,UserActivity *ua);
        void setEmail(string em);
        void setPassword(string pswd);
        string verifyLogin();
        ~User();
};

//class UserActivity;
class UserActivity{
    private: 
        string lastLogin;
        string timeLogged;
        string loginStatus;

    public:
    	UserActivity();
        string getLastLogin();
        string getTimeLogged();
        string getLoginStatus();
        ~UserActivity();
};

//class Register;
class Register{
    private:
        string registerEmail;
        string firstName;
        string lastName;
        string registerPassword;
        string registerDate;

    public:
    	Register();
        Register(string r_email, string f_name, string l_name,string r_pswd, string r_date);
        void login();
        ~Register();
};

//class Visitor;
class Visitor{
    private:
        string name;
		Register *register;//UNI-DIRECTIONAL ASSOCIATION

    public:
    	Visitor();
        void signUp(string nm, Register *rg);
        void viewCourse();
        ~Visitor();
};
