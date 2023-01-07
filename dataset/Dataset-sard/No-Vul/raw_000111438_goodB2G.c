static void FUN1()
{
    int * VAR1;
    VAR1 = NULL; 
    
    VAR1 = (int *)realloc(VAR1, 1*sizeof(int));
    VAR2 = VAR1;
    FUN2();
}