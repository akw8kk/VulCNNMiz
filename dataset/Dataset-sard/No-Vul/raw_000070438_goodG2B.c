static void FUN1()
{
    void * VAR1;
    void * VAR2[5];
    VAR1 = NULL;
    {
        char * VAR3 = (char *)malloc(50*sizeof(char));
        memset(VAR3, '', 50-1);
        VAR3[50-1] = '';
        
        VAR1 = (void *)VAR3;
    }
    VAR2[2] = VAR1;
    FUN2(VAR2);
}