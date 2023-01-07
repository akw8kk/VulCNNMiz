static void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    if(5!=5)
    {
        
        FUN2("");
    }
    else
    {
        
        VAR1 = (char *)malloc((10+1)*sizeof(char));
    }
    {
        char VAR2[10+1] = VAR3;
        
        
        memcpy(VAR1, VAR2, (strlen(VAR2) + 1) * sizeof(char));
        FUN2(VAR1);
        free(VAR1);
    }
}