static void FUN1()
{
    void * VAR1;
    VAR1 = NULL;
    {
        char * VAR2 = (char *)malloc(50*sizeof(char));
        memset(VAR2, '', 50-1);
        VAR2[50-1] = '';
        
        VAR1 = (void *)VAR2;
    }
    VAR3 = VAR1;
    FUN2();
}