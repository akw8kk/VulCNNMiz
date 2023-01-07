static void FUN1()
{
    char * VAR1;
    VAR1 = (char *)malloc(100*sizeof(char));
    if(FUN2())
    {
        
        FUN3("");
    }
    else
    {
        
        memset(VAR1, '', 50-1); 
        VAR1[50-1] = ''; 
    }
    {
        char VAR2[50] = "";
        
        FUN4(VAR2, strlen(VAR1), "", VAR1);
        FUN3(VAR1);
        free(VAR1);
    }
}