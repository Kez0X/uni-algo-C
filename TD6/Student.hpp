#include <string>

#ifndef StudentDef
#define StudentDef

class Student {
    private: 
        std::string name;
        double violation_bill;
        double scholar_fees;
        double total_due;
        void calcTotalDue();

    public:
        Student(const std::string&);
        Student(const std::string&, double);
        Student(const std::string&, double, double);

        double getViolationBill() const;
        double getScholarFees() const;
        std::string getName() const;
        double getTotalDue();
        void setViolationBill(const double amount);
        void setScholarFees(const double amount);
        void setName(const std::string name);
        void printAll() const;
};

#endif