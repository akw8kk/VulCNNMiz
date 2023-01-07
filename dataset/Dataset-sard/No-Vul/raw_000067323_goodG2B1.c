static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    VAR1 = VAR2;
    VAR3 = 0; 
    VAR1 = FUN3(VAR1);
    {
        wchar_t VAR4[50] = VAR5"";
        
        wcscpy(VAR4, VAR1);
        FUN4(VAR1);
    }
}