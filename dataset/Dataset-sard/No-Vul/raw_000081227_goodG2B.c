static void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100] = VAR3"";
    VAR1 = VAR2;
    goto VAR4;
VAR4:
    
    wcscpy(VAR1, VAR3"");
    goto VAR5;
VAR5:
    {
        wchar_t VAR6[100] = VAR3"";
        
        FUN2(VAR6, 100-1, VAR1);
        FUN3(VAR6);
    }
}