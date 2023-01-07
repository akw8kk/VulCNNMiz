static void FUN1()
{
    void * VAR1;
    void (*VAR2) (void *) = VAR3;
    VAR1 = NULL;
    {
        char * VAR4 = (char *)malloc(50*sizeof(char));
        memset(VAR4, '', 50-1);
        VAR4[50-1] = '';
        
        VAR1 = (void *)VAR4;
    }
    FUN2(VAR1);
}