// AXPY operations
void iaxpy( const int length, int a, int *X, int *Y, int *Result );
void faxpy( const int length, float a, float *X, float *Y, float *Result );
void daxpy( const int length, double a, double *X, double *Y, double *Result );

// Helper functions
void d_initVect( const int n, double* A );
void d_initMat( const int n, double* A );
void f_initVect( const int n, float* A );
void f_initMat( const int n, float* A );
void i_initVect( const int n, int* A );
void i_initMat( const int n, int* A );