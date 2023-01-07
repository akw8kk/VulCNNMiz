void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    if(VAR2==5)
    {
        
        VAR1 = (char *)malloc(10*sizeof(char));
    }
    {
        char VAR3[10+1] = VAR4;
        
        
        memcpy(VAR1, VAR3, (strlen(VAR3) + 1) * sizeof(char));
        FUN2(VAR1);
        free(VAR1);
    }
}