static void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100] = VAR3"";
    VAR1 = VAR2;
    
    wcscpy(VAR1, VAR3"");
    {
        wchar_t * VAR4 = VAR1;
        wchar_t * VAR1 = VAR4;
        {
            wchar_t VAR5[100] = VAR3"";
            
            FUN2(VAR5, 100-1, VAR1);
            FUN3(VAR5);
        }
    }
}