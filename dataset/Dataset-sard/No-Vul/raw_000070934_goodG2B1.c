static void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    if(VAR2!=5)
    {
        
        FUN2("");
    }
    else
    {
        
        VAR1 = (char *)malloc((10+1)*sizeof(char));
    }
    {
        char VAR3[10+1] = VAR4;
        
        
        strncpy(VAR1, VAR3, strlen(VAR3) + 1);
        FUN2(VAR1);
        free(VAR1);
    }
}