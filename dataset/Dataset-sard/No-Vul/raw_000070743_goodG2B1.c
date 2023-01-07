static void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    if(FUN2())
    {
        
        FUN3("");
    }
    else
    {
        
        VAR1 = (char *)malloc((10+1)*sizeof(char));
    }
    {
        char VAR2[10+1] = VAR3;
        
        strcpy(VAR1, VAR2);
        FUN3(VAR1);
        free(VAR1);
    }
}