void FUN1()
{
    char * VAR1;
    VAR1 = (char *)malloc(100*sizeof(char));
    VAR1 = FUN2(VAR1);
    {
        char VAR2[50] = "";
        
        strncpy(VAR2, VAR1, strlen(VAR1));
        VAR2[50-1] = ''; 
        FUN3(VAR1);
        free(VAR1);
    }
}