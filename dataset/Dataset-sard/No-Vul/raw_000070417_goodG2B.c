static void FUN1()
{
    void * VAR1;
    VAR1 = NULL;
    goto VAR2;
VAR2:
    {
        char * VAR3 = (char *)malloc(50*sizeof(char));
        memset(VAR3, '', 50-1);
        VAR3[50-1] = '';
        
        VAR1 = (void *)VAR3;
    }
    goto VAR4;
VAR4:
    {
        
        size_t VAR5 = strlen((char *)VAR1);
        void * VAR6 = (void *)calloc(VAR5+1, 1);
        memcpy(VAR6, VAR1, (VAR5+1));
        FUN2((char *)VAR6);
        free(VAR6);
    }
}