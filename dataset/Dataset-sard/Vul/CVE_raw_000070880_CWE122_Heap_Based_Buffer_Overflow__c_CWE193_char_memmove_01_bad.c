void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    
    VAR1 = (char *)malloc(10*sizeof(char));
    {
        char VAR2[10+1] = VAR3;
        
        
        memmove(VAR1, VAR2, (strlen(VAR2) + 1) * sizeof(char));
        FUN2(VAR1);
        free(VAR1);
    }
}