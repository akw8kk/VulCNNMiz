static void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100] = VAR3;
    VAR1 = VAR2;
    VAR1 = FUN2(VAR1);
    {
        VAR4 *VAR5;
        
        VAR5 = FUN3(VAR1, VAR6"");
        if (VAR5 != NULL)
        {
            FUN4(VAR5);
        }
    }
}