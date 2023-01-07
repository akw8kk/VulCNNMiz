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
    FUN2(VAR1);
}