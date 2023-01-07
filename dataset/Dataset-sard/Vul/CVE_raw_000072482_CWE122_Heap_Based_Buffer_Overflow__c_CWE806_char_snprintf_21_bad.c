void FUN1()
{
    char * VAR1;
    VAR1 = (char *)malloc(100*sizeof(char));
    VAR2 = 1; 
    VAR1 = FUN2(VAR1);
    {
        char VAR3[50] = "";
        
        FUN3(VAR3, strlen(VAR1), "", VAR1);
        FUN4(VAR1);
        free(VAR1);
    }
}