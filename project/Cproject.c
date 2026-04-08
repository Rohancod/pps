#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Patient {
    int id;
    char name[30];
    int age;
};

struct User {
    char username[30];
    char password[30];
};

struct Appointment {
    int pid;
    char doctor[30];
};


void registerPatient() {
    FILE *fp;
    struct User u;

    fp = fopen("users.txt", "a");

    printf("Enter username: ");
    scanf("%s", u.username);
    printf("Enter password: ");
    scanf("%s", u.password);

    fprintf(fp, "%s %s\n", u.username, u.password);
    fclose(fp);

    printf("Registration successful!\n");
}


int loginPatient() {
    FILE *fp;
    struct User u;
    char user[30], pass[30];

    fp = fopen("users.txt", "r");

    printf("Enter username: ");
    scanf("%s", user);
    printf("Enter password: ");
    scanf("%s", pass);

    while (fscanf(fp, "%s %s", u.username, u.password) != EOF) {
        if (strcmp(user, u.username) == 0 && strcmp(pass, u.password) == 0) {
            fclose(fp);
            return 1;
        }
    }

    fclose(fp);
    return 0;
}


int adminLogin() {
    char user[20], pass[20];

    printf("Admin Username: ");
    scanf("%s", user);
    printf("Password: ");
    scanf("%s", pass);

    if (strcmp(user, "admin") == 0 && strcmp(pass, "123") == 0)
        return 1;
    else
        return 0;
}


void addPatient() {
    FILE *fp;
    struct Patient p;

    fp = fopen("patients.txt", "a");

    printf("Enter ID Name Age: ");
    scanf("%d %s %d", &p.id, p.name, &p.age);

    fprintf(fp, "%d %s %d\n", p.id, p.name, p.age);
    fclose(fp);

    printf("Patient Added!\n");
}


void viewPatients() {
    FILE *fp;
    struct Patient p;

    fp = fopen("patients.txt", "r");

    printf("\n--- Patients ---\n");

    while (fscanf(fp, "%d %s %d", &p.id, p.name, &p.age) != EOF) {
        printf("ID:%d Name:%s Age:%d\n", p.id, p.name, p.age);
    }

    fclose(fp);
}


void bookAppointment() {
    FILE *fp;
    struct Appointment a;

    fp = fopen("appointments.txt", "a");

    printf("Enter Patient ID: ");
    scanf("%d", &a.pid);
    printf("Enter Doctor Name: ");
    scanf("%s", a.doctor);

    fprintf(fp, "%d %s\n", a.pid, a.doctor);
    fclose(fp);

    printf("Appointment Booked!\n");
}


void viewAppointments() {
    FILE *fp;
    struct Appointment a;

    fp = fopen("appointments.txt", "r");

    printf("\n--- Appointments ---\n");

    while (fscanf(fp, "%d %s", &a.pid, a.doctor) != EOF) {
        printf("Patient ID:%d Doctor:%s\n", a.pid, a.doctor);
    }

    fclose(fp);
}


void adminMenu() {
    int ch;

    while (1) {
        printf("\n--- Admin Menu ---\n");
        printf("1. Add Patient\n");
        printf("2. View Patients\n");
        printf("3. View Appointments\n");
        printf("4. Logout\n");

        scanf("%d", &ch);

        switch (ch) {
            case 1: addPatient(); break;
            case 2: viewPatients(); break;
            case 3: viewAppointments(); break;
            case 4: return;
            default: printf("Invalid\n");
        }
    }
}


void patientMenu() {
    int ch;

    while (1) {
        printf("\n--- Patient Menu ---\n");
        printf("1. Book Appointment\n");
        printf("2. View Appointments\n");
        printf("3. Logout\n");

        scanf("%d", &ch);

        switch (ch) {
            case 1: bookAppointment(); break;
            case 2: viewAppointments(); break;
            case 3: return;
            default: printf("Invalid\n");
        }
    }
}


int main() {
    int choice;

    while (1) {
        printf("\n--- HMS ---\n");
        printf("1. Admin Login\n");
        printf("2. Patient Login\n");
        printf("3. Register Patient\n");
        printf("4. Exit\n");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (adminLogin()) adminMenu();
                else printf("Wrong Admin Login\n");
                break;

            case 2:
                if (loginPatient()) patientMenu();
                else printf("Wrong Login\n");
                break;

            case 3:
                registerPatient();
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}