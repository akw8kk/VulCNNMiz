static void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    {
        char VAR2[VAR3] = "";
        
        if (fgets(VAR2, VAR3, stdin) != NULL)
        {
            
            VAR1 = FUN2(VAR2);
        }
        else
        {
            FUN3("");
        }
    }
    VAR4 = 1; 
    FUN4(VAR1);
}