static void FUN1()
{
    void * VAR1;
    VAR1 = NULL;
    switch(6)
    {
    case 6:
    {
        char * VAR2 = (char *)malloc(50*sizeof(char));
        memset(VAR2, '', 50-1);
        VAR2[50-1] = '';
        
        VAR1 = (void *)VAR2;
    }
    break;
    default:
        
        FUN2("");
        break;
    }
    switch(7)
    {
    case 7:
    {
        
        size_t VAR3 = strlen((char *)VAR1);
        void * VAR4 = (void *)calloc(VAR3+1, 1);
        memcpy(VAR4, VAR1, (VAR3+1));
        FUN2((char *)VAR4);
        free(VAR4);
    }
    break;
    default:
        
        FUN2("");
        break;
    }
}