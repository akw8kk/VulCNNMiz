static void FUN1()
{
    char * VAR1;
    char VAR2[50];
    char VAR3[100];
    if(FUN2())
    {
        
        FUN3("");
    }
    else
    {
        
        VAR1 = VAR3;
        VAR1[0] = ''; 
    }
    {
        char VAR4[100];
        memset(VAR4, '', 100-1); 
        VAR4[100-1] = ''; 
        
        FUN4(VAR1, 100, "", VAR4);
        FUN3(VAR1);
    }
}