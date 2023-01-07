void FUN1()
{
    long * VAR1;
    VAR1 = NULL; 
    
    VAR1 = (long *)realloc(VAR1, 1*sizeof(long));
    VAR2 = VAR1;
    FUN2();
}