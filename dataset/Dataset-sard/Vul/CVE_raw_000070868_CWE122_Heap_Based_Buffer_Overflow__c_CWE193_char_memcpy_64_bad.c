void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    
    VAR1 = (char *)malloc(10*sizeof(char));
    FUN2(&VAR1);
}