#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int available;
};

struct Member {
    int id;
    char name[50];
    int issued_book_id;
};

int main() {
    struct Book books[10];
    struct Member members[10];
    int bCount = 0, mCount = 0;
    int choice, i, bookId, memberId;

    while (1) {
        printf("\n1.Add Book\n2.Add Member\n3.Issue Book\n4.View Members\n5.Exit\n");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter book id, title, author: ");
            scanf("%d %s %s", &books[bCount].id,
                  books[bCount].title,
                  books[bCount].author);
            books[bCount].available = 1;
            bCount++;
            break;

        case 2:
            printf("Enter member id, name: ");
            scanf("%d %s", &members[mCount].id,
                  members[mCount].name);
            members[mCount].issued_book_id = 0;
            mCount++;
            break;

        case 3:
            printf("Enter member id and book id: ");
            scanf("%d %d", &memberId, &bookId);

            for (i = 0; i < bCount; i++) {
                if (books[i].id == bookId && books[i].available == 1) {
                    books[i].available = 0;

                    for (int j = 0; j < mCount; j++) {
                        if (members[j].id == memberId)
                            members[j].issued_book_id = bookId;
                    }
                }
            }
            break;

        case 4:
            for (i = 0; i < mCount; i++)
                printf("Member: %s Issued Book ID: %d\n",
                       members[i].name,
                       members[i].issued_book_id);
            break;

        case 5:
            return 0;
        }
    }
}