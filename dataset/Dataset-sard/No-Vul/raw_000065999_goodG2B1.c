static void FUN1()
{
    char * VAR1;
    char VAR2[100];
    VAR1 = VAR2;
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
        char VAR3[50] = "";
        
        strncpy(VAR3, VAR1, strlen(VAR1));
        VAR3[50-1] = ''; 
        FUN3(VAR1);
    }
}