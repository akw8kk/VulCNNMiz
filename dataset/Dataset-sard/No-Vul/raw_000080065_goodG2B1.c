static void FUN1()
{
    char * VAR1;
    char VAR2[100] = "";
    VAR1 = VAR2;
    if(FUN2())
    {
        
        FUN3("");
    }
    else
    {
        
        strcpy(VAR1, "");
    }
    if(FUN4())
    {
        {
            char VAR3[100] = "";
            
            FUN5(VAR3, 100-1, VAR1);
            FUN3(VAR3);
        }
    }
}