void FUN1()
{
    int VAR1;
    int VAR2[5];
    
    VAR1 = -1;
    {
        char VAR3[VAR4] = "";
        
        if (fgets(VAR3, VAR4, stdin) != NULL)
        {
            
            VAR1 = FUN2(VAR3);
        }
        else
        {
            FUN3("");
        }
    }
    
    VAR2[2] = VAR1;
    FUN4(VAR2);
}