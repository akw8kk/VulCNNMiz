static void FUN1()
{
    char * VAR1;
    char VAR2[100] = "";
    VAR1 = VAR2;
    if(FUN2())
    {
        
        strcpy(VAR1, "");
    }
    if(FUN2())
    {
        {
            char VAR3[100] = "";
            
            FUN3(VAR3, 100-1, VAR1);
            FUN4(VAR3);
        }
    }
}