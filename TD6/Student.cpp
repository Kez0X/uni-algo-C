#include <string>
#include <iostream>
#include <assert.h>
#include "Student.hpp"

class Student {
    private: 
        // attributes
        std::string _name = "";
        double _violation_bill = 0;
        double _scholar_fees = 0;
        double _total_due = 0;
        void calcTotalDue() {
            _total_due = _scholar_fees + _violation_bill;
        };
    
    public:
        // constructors
        Student(const std::string& name) {
            _name = name;
        };
        Student(const std::string& name, double violation_bill) {
            _name = name;
            _violation_bill = violation_bill;
        };
        Student(const std::string& name, double violation_bill, double scholar_fees) {
            _name = name;
            _violation_bill = violation_bill;
            _scholar_fees = scholar_fees;
        };

        // methods
        double getViolationBill() const {
            return _violation_bill;
        }

        void setViolationBill(const double amount) {
            assert(amount >= 0);
            _violation_bill = amount;
        }

        double getScholarFees() const {
            return _scholar_fees;
        }

        void setScholarFees(const double amount) {
            assert(amount >= 0);
            _scholar_fees = amount;
        }

        std::string getName() const {
            return _name;
        }

        void setName(const std::string name) {
            _name = name;
        }

        double getTotalDue() {
            calcTotalDue();
            return _total_due;
        }

        void printAll() const {
            std::cout << "Nom: " << _name << std::endl << "Amende:" << _violation_bill << std::endl << "Frais: " << _scholar_fees << std::endl << "Total: " << _total_due << std::endl;
        }
};