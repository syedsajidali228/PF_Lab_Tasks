#include <stdio.h>

struct HospitalRecord

{
    struct PatientInfo
    {
        int patientID;
        char patientName[50];

    } patient;

    int roomNumber;
    char admissionDate[20];
    
};

int main()

{
    struct HospitalRecord hospitalRecord = {
        {501 , "Ali"},
         12,
          "15-11-2026"
    };

    struct HospitalRecord *ptr = &hospitalRecord;

  printf("Hospital Record \n");
 printf("Patient ID: %d \n" , ptr->patient.patientID);
 printf(" Patient Name: %s \n" , ptr->patient.patientName);
 printf("Room Number: %d \n" , ptr->roomNumber);
 printf("Admission Date: %s \n" , ptr->admissionDate);

    return 0;
}
