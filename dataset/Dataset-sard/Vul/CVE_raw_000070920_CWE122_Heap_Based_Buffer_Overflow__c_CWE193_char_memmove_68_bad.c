void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    
    VAR1 = (char *)malloc(10*sizeof(char));
    VAR2 = VAR1;
    FUN2();
}