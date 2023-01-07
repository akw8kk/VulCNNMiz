static void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    {
        char * VAR2 = (char *)malloc(100*sizeof(char));
        memset(VAR2, '', 100-1);
        VAR2[100-1] = '';
        
        VAR1 = VAR2;
    }
    FUN2(VAR1);
}