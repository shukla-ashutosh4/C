#include <stdio.h>
#include <stdlib.h>

// Define a structure for a term in the polynomial
struct Term {
    int coefficient;   // Coefficient of the term
    int exponent;      // Exponent of the term
    struct Term* nextTerm;  // Pointer to the next term in the polynomial
};

// Define a structure for the polynomial
struct Polynomial {
    struct Term* head;  // Pointer to the first term in the polynomial
};

// Function to add a term to the polynomial
void AddTerm(struct Polynomial* polynomial, int coefficient, int exponent) {
    // Create a new term
    struct Term* newTerm = (struct Term*)malloc(sizeof(struct Term));
    newTerm->coefficient = coefficient;
    newTerm->exponent = exponent;
    newTerm->nextTerm = NULL;
    
    // If the polynomial is empty, set the new term as the head
    if (polynomial->head == NULL) {
        polynomial->head = newTerm;
    } else {
        // Find the last term in the polynomial
        struct Term* currentTerm = polynomial->head;
        while (currentTerm->nextTerm != NULL) {
            currentTerm = currentTerm->nextTerm;
        }
        
        // Append the new term to the end
        currentTerm->nextTerm = newTerm;
    }
}

// Function to print the polynomial
void PrintPolynomial(struct Polynomial* polynomial) {
    struct Term* currentTerm = polynomial->head;
    
    while (currentTerm != NULL) {
        printf("%dx^%d", currentTerm->coefficient, currentTerm->exponent);
        
        if (currentTerm->nextTerm != NULL) {
            printf(" + ");
        }
        
        currentTerm = currentTerm->nextTerm;
    }
    printf("\n");
}

int main() {
    // Initialize an empty polynomial
    struct Polynomial myPolynomial;
    myPolynomial.head = NULL;
    
    // Add terms to the polynomial
    AddTerm(&myPolynomial, 4, 2);
    AddTerm(&myPolynomial, 4, 1);
    AddTerm(&myPolynomial, 3, 0);
    
    // Print the polynomial
    printf("Polynomial: ");
    PrintPolynomial(&myPolynomial);
    
    return 0;
}
