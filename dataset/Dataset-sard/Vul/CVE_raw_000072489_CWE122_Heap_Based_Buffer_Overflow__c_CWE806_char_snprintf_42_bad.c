void FUN1()
{
    char * VAR1;
    VAR1 = (char *)malloc(100*sizeof(char));
    VAR1 = FUN2(VAR1);
    {
        char VAR2[50] = "";
        
        FUN3(VAR2, strlen(VAR1), "", VAR1);
        FUN4(VAR1);
        free(VAR1);
    }
}