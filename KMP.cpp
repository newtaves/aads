<!DOCTYPE html>
<!-- saved from url=(0044)https://www.codechef.com/cpp-online-compiler -->
<html lang="en"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8"><style id="ace-tomorrow-night">.ace-tomorrow-night .ace_gutter {background: #25282c;color: #C5C8C6}.ace-tomorrow-night .ace_print-margin {width: 1px;background: #25282c}.ace-tomorrow-night {background-color: #1D1F21;color: #C5C8C6}.ace-tomorrow-night .ace_cursor {color: #AEAFAD}.ace-tomorrow-night .ace_marker-layer .ace_selection {background: #373B41}.ace-tomorrow-night.ace_multiselect .ace_selection.ace_start {box-shadow: 0 0 3px 0px #1D1F21;}.ace-tomorrow-night .ace_marker-layer .ace_step {background: rgb(102, 82, 0)}.ace-tomorrow-night .ace_marker-layer .ace_bracket {margin: -1px 0 0 -1px;border: 1px solid #4B4E55}.ace-tomorrow-night .ace_marker-layer .ace_active-line {background: #282A2E}.ace-tomorrow-night .ace_gutter-active-line {background-color: #282A2E}.ace-tomorrow-night .ace_marker-layer .ace_selected-word {border: 1px solid #373B41}.ace-tomorrow-night .ace_invisible {color: #4B4E55}.ace-tomorrow-night .ace_keyword,.ace-tomorrow-night .ace_meta,.ace-tomorrow-night .ace_storage,.ace-tomorrow-night .ace_storage.ace_type,.ace-tomorrow-night .ace_support.ace_type {color: #B294BB}.ace-tomorrow-night .ace_keyword.ace_operator {color: #8ABEB7}.ace-tomorrow-night .ace_constant.ace_character,.ace-tomorrow-night .ace_constant.ace_language,.ace-tomorrow-night .ace_constant.ace_numeric,.ace-tomorrow-night .ace_keyword.ace_other.ace_unit,.ace-tomorrow-night .ace_support.ace_constant,.ace-tomorrow-night .ace_variable.ace_parameter {color: #DE935F}.ace-tomorrow-night .ace_constant.ace_other {color: #CED1CF}.ace-tomorrow-night .ace_invalid {color: #CED2CF;background-color: #DF5F5F}.ace-tomorrow-night .ace_invalid.ace_deprecated {color: #CED2CF;background-color: #B798BF}.ace-tomorrow-night .ace_fold {background-color: #81A2BE;border-color: #C5C8C6}.ace-tomorrow-night .ace_entity.ace_name.ace_function,.ace-tomorrow-night .ace_support.ace_function,.ace-tomorrow-night .ace_variable {color: #81A2BE}.ace-tomorrow-night .ace_support.ace_class,.ace-tomorrow-night .ace_support.ace_type {color: #F0C674}.ace-tomorrow-night .ace_heading,.ace-tomorrow-night .ace_markup.ace_heading,.ace-tomorrow-night .ace_string {color: #B5BD68}.ace-tomorrow-night .ace_entity.ace_name.ace_tag,.ace-tomorrow-night .ace_entity.ace_other.ace_attribute-name,.ace-tomorrow-night .ace_meta.ace_tag,.ace-tomorrow-night .ace_string.ace_regexp,.ace-tomorrow-night .ace_variable {color: #CC6666}.ace-tomorrow-night .ace_comment {color: #969896}.ace-tomorrow-night .ace_indent-guide {background: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAAEklEQVQImWNgYGBgYHB3d/8PAAOIAdULw8qMAAAAAElFTkSuQmCC) right repeat-y}
/*# sourceURL=ace/css/ace-tomorrow-night */</style><style id="autocompletion.css">
.ace_editor.ace_autocomplete .ace_marker-layer .ace_active-line {
    background-color: #CAD6FA;
    z-index: 1;
}
.ace_dark.ace_editor.ace_autocomplete .ace_marker-layer .ace_active-line {
    background-color: #3a674e;
}
.ace_editor.ace_autocomplete .ace_line-hover {
    border: 1px solid #abbffe;
    margin-top: -1px;
    background: rgba(233,233,253,0.4);
    position: absolute;
    z-index: 2;
}
.ace_dark.ace_editor.ace_autocomplete .ace_line-hover {
    border: 1px solid rgba(109, 150, 13, 0.8);
    background: rgba(58, 103, 78, 0.62);
}
.ace_completion-meta {
    opacity: 0.5;
    margin-left: 0.9em;
}
.ace_completion-message {
    margin-left: 0.9em;
    color: blue;
}
.ace_editor.ace_autocomplete .ace_completion-highlight{
    color: #2d69c7;
}
.ace_dark.ace_editor.ace_autocomplete .ace_completion-highlight{
    color: #93ca12;
}
.ace_editor.ace_autocomplete {
    width: 300px;
    z-index: 200000;
    border: 1px lightgray solid;
    position: fixed;
    box-shadow: 2px 3px 5px rgba(0,0,0,.2);
    line-height: 1.4;
    background: #fefefe;
    color: #111;
}
.ace_dark.ace_editor.ace_autocomplete {
    border: 1px #484747 solid;
    box-shadow: 2px 3px 5px rgba(0, 0, 0, 0.51);
    line-height: 1.4;
    background: #25282c;
    color: #c1c1c1;
}
.ace_autocomplete .ace_text-layer  {
    width: calc(100% - 8px);
}
.ace_autocomplete .ace_line {
    display: flex;
    align-items: center;
}
.ace_autocomplete .ace_line > * {
    min-width: 0;
    flex: 0 0 auto;
}
.ace_autocomplete .ace_line .ace_ {
    flex: 0 1 auto;
    overflow: hidden;
    text-overflow: ellipsis;
}
.ace_autocomplete .ace_completion-spacer {
    flex: 1;
}
.ace_autocomplete.ace_loading:after  {
    content: "";
    position: absolute;
    top: 0px;
    height: 2px;
    width: 8%;
    background: blue;
    z-index: 100;
    animation: ace_progress 3s infinite linear;
    animation-delay: 300ms;
    transform: translateX(-100%) scaleX(1);
}
@keyframes ace_progress {
    0% { transform: translateX(-100%) scaleX(1) }
    50% { transform: translateX(625%) scaleX(2) } 
    100% { transform: translateX(1500%) scaleX(3) } 
}
@media (prefers-reduced-motion) {
    .ace_autocomplete.ace_loading:after {
        transform: translateX(625%) scaleX(2);
        animation: none;
     }
}

/*# sourceURL=ace/css/autocompletion.css */</style><style id="snippets.css">
.ace_snippet-marker {
    -moz-box-sizing: border-box;
    box-sizing: border-box;
    background: rgba(194, 193, 208, 0.09);
    border: 1px dotted rgba(211, 208, 235, 0.62);
    position: absolute;
}
/*# sourceURL=ace/css/snippets.css */</style><style id="error_marker.css">
    .error_widget_wrapper {
        background: inherit;
        color: inherit;
        border:none
    }
    .error_widget {
        border-top: solid 2px;
        border-bottom: solid 2px;
        margin: 5px 0;
        padding: 10px 40px;
        white-space: pre-wrap;
    }
    .error_widget.ace_error, .error_widget_arrow.ace_error{
        border-color: #ff5a5a
    }
    .error_widget.ace_warning, .error_widget_arrow.ace_warning{
        border-color: #F1D817
    }
    .error_widget.ace_info, .error_widget_arrow.ace_info{
        border-color: #5a5a5a
    }
    .error_widget.ace_ok, .error_widget_arrow.ace_ok{
        border-color: #5aaa5a
    }
    .error_widget_arrow {
        position: absolute;
        border: solid 5px;
        border-top-color: transparent!important;
        border-right-color: transparent!important;
        border-left-color: transparent!important;
        top: -5px;
    }

/*# sourceURL=ace/css/error_marker.css */</style><style id="ace-tm">.ace-tm .ace_gutter {
  background: #f0f0f0;
  color: #333;
}

.ace-tm .ace_print-margin {
  width: 1px;
  background: #e8e8e8;
}

.ace-tm .ace_fold {
    background-color: #6B72E6;
}

.ace-tm {
  background-color: #FFFFFF;
  color: black;
}

.ace-tm .ace_cursor {
  color: black;
}
        
.ace-tm .ace_invisible {
  color: rgb(191, 191, 191);
}

.ace-tm .ace_storage,
.ace-tm .ace_keyword {
  color: blue;
}

.ace-tm .ace_constant {
  color: rgb(197, 6, 11);
}

.ace-tm .ace_constant.ace_buildin {
  color: rgb(88, 72, 246);
}

.ace-tm .ace_constant.ace_language {
  color: rgb(88, 92, 246);
}

.ace-tm .ace_constant.ace_library {
  color: rgb(6, 150, 14);
}

.ace-tm .ace_invalid {
  background-color: rgba(255, 0, 0, 0.1);
  color: red;
}

.ace-tm .ace_support.ace_function {
  color: rgb(60, 76, 114);
}

.ace-tm .ace_support.ace_constant {
  color: rgb(6, 150, 14);
}

.ace-tm .ace_support.ace_type,
.ace-tm .ace_support.ace_class {
  color: rgb(109, 121, 222);
}

.ace-tm .ace_keyword.ace_operator {
  color: rgb(104, 118, 135);
}

.ace-tm .ace_string {
  color: rgb(3, 106, 7);
}

.ace-tm .ace_comment {
  color: rgb(76, 136, 107);
}

.ace-tm .ace_comment.ace_doc {
  color: rgb(0, 102, 255);
}

.ace-tm .ace_comment.ace_doc.ace_tag {
  color: rgb(128, 159, 191);
}

.ace-tm .ace_constant.ace_numeric {
  color: rgb(0, 0, 205);
}

.ace-tm .ace_variable {
  color: rgb(49, 132, 149);
}

.ace-tm .ace_xml-pe {
  color: rgb(104, 104, 91);
}

.ace-tm .ace_entity.ace_name.ace_function {
  color: #0000A2;
}


.ace-tm .ace_heading {
  color: rgb(12, 7, 255);
}

.ace-tm .ace_list {
  color:rgb(185, 6, 144);
}

.ace-tm .ace_meta.ace_tag {
  color:rgb(0, 22, 142);
}

.ace-tm .ace_string.ace_regex {
  color: rgb(255, 0, 0)
}

.ace-tm .ace_marker-layer .ace_selection {
  background: rgb(181, 213, 255);
}
.ace-tm.ace_multiselect .ace_selection.ace_start {
  box-shadow: 0 0 3px 0px white;
}
.ace-tm .ace_marker-layer .ace_step {
  background: rgb(252, 255, 0);
}

.ace-tm .ace_marker-layer .ace_stack {
  background: rgb(164, 229, 101);
}

.ace-tm .ace_marker-layer .ace_bracket {
  margin: -1px 0 0 -1px;
  border: 1px solid rgb(192, 192, 192);
}

.ace-tm .ace_marker-layer .ace_active-line {
  background: rgba(0, 0, 0, 0.07);
}

.ace-tm .ace_gutter-active-line {
    background-color : #dcdcdc;
}

.ace-tm .ace_marker-layer .ace_selected-word {
  background: rgb(250, 250, 255);
  border: 1px solid rgb(200, 200, 250);
}

.ace-tm .ace_indent-guide {
  background: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAAE0lEQVQImWP4////f4bLly//BwAmVgd1/w11/gAAAABJRU5ErkJggg==") right repeat-y;
}

.ace-tm .ace_indent-guide-active {
  background: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAACXBIWXMAAAsTAAALEwEAmpwYAAAAIGNIUk0AAHolAACAgwAA+f8AAIDpAAB1MAAA6mAAADqYAAAXb5JfxUYAAAAZSURBVHjaYvj///9/hivKyv8BAAAA//8DACLqBhbvk+/eAAAAAElFTkSuQmCC") right repeat-y;
}

/*# sourceURL=ace/css/ace-tm */</style><style id="ace_editor.css">
.ace_br1 {border-top-left-radius    : 3px;}
.ace_br2 {border-top-right-radius   : 3px;}
.ace_br3 {border-top-left-radius    : 3px; border-top-right-radius:    3px;}
.ace_br4 {border-bottom-right-radius: 3px;}
.ace_br5 {border-top-left-radius    : 3px; border-bottom-right-radius: 3px;}
.ace_br6 {border-top-right-radius   : 3px; border-bottom-right-radius: 3px;}
.ace_br7 {border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-right-radius: 3px;}
.ace_br8 {border-bottom-left-radius : 3px;}
.ace_br9 {border-top-left-radius    : 3px; border-bottom-left-radius:  3px;}
.ace_br10{border-top-right-radius   : 3px; border-bottom-left-radius:  3px;}
.ace_br11{border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-left-radius:  3px;}
.ace_br12{border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}
.ace_br13{border-top-left-radius    : 3px; border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}
.ace_br14{border-top-right-radius   : 3px; border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}
.ace_br15{border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-right-radius: 3px; border-bottom-left-radius: 3px;}


.ace_editor {
    position: relative;
    overflow: hidden;
    padding: 0;
    font: 12px/normal 'Monaco', 'Menlo', 'Ubuntu Mono', 'Consolas', 'Source Code Pro', 'source-code-pro', monospace;
    direction: ltr;
    text-align: left;
    -webkit-tap-highlight-color: rgba(0, 0, 0, 0);
    forced-color-adjust: none;
}

.ace_scroller {
    position: absolute;
    overflow: hidden;
    top: 0;
    bottom: 0;
    background-color: inherit;
    -ms-user-select: none;
    -moz-user-select: none;
    -webkit-user-select: none;
    user-select: none;
    cursor: text;
}

.ace_content {
    position: absolute;
    box-sizing: border-box;
    min-width: 100%;
    contain: style size layout;
    font-variant-ligatures: no-common-ligatures;
}
.ace_invisible {
    font-variant-ligatures: none;
}

.ace_keyboard-focus:focus {
    box-shadow: inset 0 0 0 2px #5E9ED6;
    outline: none;
}

.ace_dragging .ace_scroller:before{
    position: absolute;
    top: 0;
    left: 0;
    right: 0;
    bottom: 0;
    content: '';
    background: rgba(250, 250, 250, 0.01);
    z-index: 1000;
}
.ace_dragging.ace_dark .ace_scroller:before{
    background: rgba(0, 0, 0, 0.01);
}

.ace_gutter {
    position: absolute;
    overflow : hidden;
    width: auto;
    top: 0;
    bottom: 0;
    left: 0;
    cursor: default;
    z-index: 4;
    -ms-user-select: none;
    -moz-user-select: none;
    -webkit-user-select: none;
    user-select: none;
    contain: style size layout;
}

.ace_gutter-active-line {
    position: absolute;
    left: 0;
    right: 0;
}

.ace_scroller.ace_scroll-left:after {
    content: "";
    position: absolute;
    top: 0;
    right: 0;
    bottom: 0;
    left: 0;
    box-shadow: 17px 0 16px -16px rgba(0, 0, 0, 0.4) inset;
    pointer-events: none;
}

.ace_gutter-cell, .ace_gutter-cell_svg-icons {
    position: absolute;
    top: 0;
    left: 0;
    right: 0;
    padding-left: 19px;
    padding-right: 6px;
    background-repeat: no-repeat;
}

.ace_gutter-cell_svg-icons .ace_gutter_annotation {
    margin-left: -14px;
    float: left;
}

.ace_gutter-cell .ace_gutter_annotation {
    margin-left: -19px;
    float: left;
}

.ace_gutter-cell.ace_error, .ace_icon.ace_error, .ace_icon.ace_error_fold, .ace_gutter-cell.ace_security, .ace_icon.ace_security, .ace_icon.ace_security_fold {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAABOFBMVEX/////////QRswFAb/Ui4wFAYwFAYwFAaWGAfDRymzOSH/PxswFAb/SiUwFAYwFAbUPRvjQiDllog5HhHdRybsTi3/Tyv9Tir+Syj/UC3////XurebMBIwFAb/RSHbPx/gUzfdwL3kzMivKBAwFAbbvbnhPx66NhowFAYwFAaZJg8wFAaxKBDZurf/RB6mMxb/SCMwFAYwFAbxQB3+RB4wFAb/Qhy4Oh+4QifbNRcwFAYwFAYwFAb/QRzdNhgwFAYwFAbav7v/Uy7oaE68MBK5LxLewr/r2NXewLswFAaxJw4wFAbkPRy2PyYwFAaxKhLm1tMwFAazPiQwFAaUGAb/QBrfOx3bvrv/VC/maE4wFAbRPBq6MRO8Qynew8Dp2tjfwb0wFAbx6eju5+by6uns4uH9/f36+vr/GkHjAAAAYnRSTlMAGt+64rnWu/bo8eAA4InH3+DwoN7j4eLi4xP99Nfg4+b+/u9B/eDs1MD1mO7+4PHg2MXa347g7vDizMLN4eG+Pv7i5evs/v79yu7S3/DV7/498Yv24eH+4ufQ3Ozu/v7+y13sRqwAAADLSURBVHjaZc/XDsFgGIBhtDrshlitmk2IrbHFqL2pvXf/+78DPokj7+Fz9qpU/9UXJIlhmPaTaQ6QPaz0mm+5gwkgovcV6GZzd5JtCQwgsxoHOvJO15kleRLAnMgHFIESUEPmawB9ngmelTtipwwfASilxOLyiV5UVUyVAfbG0cCPHig+GBkzAENHS0AstVF6bacZIOzgLmxsHbt2OecNgJC83JERmePUYq8ARGkJx6XtFsdddBQgZE2nPR6CICZhawjA4Fb/chv+399kfR+MMMDGOQAAAABJRU5ErkJggg==");
    background-repeat: no-repeat;
    background-position: 2px center;
}

.ace_gutter-cell.ace_warning, .ace_icon.ace_warning, .ace_icon.ace_warning_fold {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAAAmVBMVEX///8AAAD///8AAAAAAABPSzb/5sAAAAB/blH/73z/ulkAAAAAAAD85pkAAAAAAAACAgP/vGz/rkDerGbGrV7/pkQICAf////e0IsAAAD/oED/qTvhrnUAAAD/yHD/njcAAADuv2r/nz//oTj/p064oGf/zHAAAAA9Nir/tFIAAAD/tlTiuWf/tkIAAACynXEAAAAAAAAtIRW7zBpBAAAAM3RSTlMAABR1m7RXO8Ln31Z36zT+neXe5OzooRDfn+TZ4p3h2hTf4t3k3ucyrN1K5+Xaks52Sfs9CXgrAAAAjklEQVR42o3PbQ+CIBQFYEwboPhSYgoYunIqqLn6/z8uYdH8Vmdnu9vz4WwXgN/xTPRD2+sgOcZjsge/whXZgUaYYvT8QnuJaUrjrHUQreGczuEafQCO/SJTufTbroWsPgsllVhq3wJEk2jUSzX3CUEDJC84707djRc5MTAQxoLgupWRwW6UB5fS++NV8AbOZgnsC7BpEAAAAABJRU5ErkJggg==");
    background-repeat: no-repeat;
    background-position: 2px center;
}

.ace_gutter-cell.ace_info, .ace_icon.ace_info, .ace_gutter-cell.ace_hint, .ace_icon.ace_hint {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAAAAAA6mKC9AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAAJ0Uk5TAAB2k804AAAAPklEQVQY02NgIB68QuO3tiLznjAwpKTgNyDbMegwisCHZUETUZV0ZqOquBpXj2rtnpSJT1AEnnRmL2OgGgAAIKkRQap2htgAAAAASUVORK5CYII=");
    background-repeat: no-repeat;
    background-position: 2px center;
}

.ace_dark .ace_gutter-cell.ace_info, .ace_dark .ace_icon.ace_info, .ace_dark .ace_gutter-cell.ace_hint, .ace_dark .ace_icon.ace_hint {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQBAMAAADt3eJSAAAAJFBMVEUAAAChoaGAgIAqKiq+vr6tra1ZWVmUlJSbm5s8PDxubm56enrdgzg3AAAAAXRSTlMAQObYZgAAAClJREFUeNpjYMAPdsMYHegyJZFQBlsUlMFVCWUYKkAZMxZAGdxlDMQBAG+TBP4B6RyJAAAAAElFTkSuQmCC");
}

.ace_icon_svg.ace_error {
    -webkit-mask-image: url("data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAyMCAxNiI+CjxnIHN0cm9rZS13aWR0aD0iMiIgc3Ryb2tlPSJyZWQiIHNoYXBlLXJlbmRlcmluZz0iZ2VvbWV0cmljUHJlY2lzaW9uIj4KPGNpcmNsZSBmaWxsPSJub25lIiBjeD0iOCIgY3k9IjgiIHI9IjciIHN0cm9rZS1saW5lam9pbj0icm91bmQiLz4KPGxpbmUgeDE9IjExIiB5MT0iNSIgeDI9IjUiIHkyPSIxMSIvPgo8bGluZSB4MT0iMTEiIHkxPSIxMSIgeDI9IjUiIHkyPSI1Ii8+CjwvZz4KPC9zdmc+");
    background-color: crimson;
}
.ace_icon_svg.ace_security {
    -webkit-mask-image: url("data:image/svg+xml;base64,PHN2ZyB2aWV3Qm94PSIwIDAgMjAgMTYiIHhtbG5zPSJodHRwOi8vd3d3LnczLm9yZy8yMDAwL3N2ZyI+CiAgICA8ZyBzdHJva2Utd2lkdGg9IjIiIHN0cm9rZT0iZGFya29yYW5nZSIgZmlsbD0ibm9uZSIgc2hhcGUtcmVuZGVyaW5nPSJnZW9tZXRyaWNQcmVjaXNpb24iPgogICAgICAgIDxwYXRoIGNsYXNzPSJzdHJva2UtbGluZWpvaW4tcm91bmQiIGQ9Ik04IDE0LjgzMDdDOCAxNC44MzA3IDIgMTIuOTA0NyAyIDguMDg5OTJWMy4yNjU0OEM1LjMxIDMuMjY1NDggNy45ODk5OSAxLjM0OTE4IDcuOTg5OTkgMS4zNDkxOEM3Ljk4OTk5IDEuMzQ5MTggMTAuNjkgMy4yNjU0OCAxNCAzLjI2NTQ4VjguMDg5OTJDMTQgMTIuOTA0NyA4IDE0LjgzMDcgOCAxNC44MzA3WiIvPgogICAgICAgIDxwYXRoIGQ9Ik0yIDguMDg5OTJWMy4yNjU0OEM1LjMxIDMuMjY1NDggNy45ODk5OSAxLjM0OTE4IDcuOTg5OTkgMS4zNDkxOCIvPgogICAgICAgIDxwYXRoIGQ9Ik0xMy45OSA4LjA4OTkyVjMuMjY1NDhDMTAuNjggMy4yNjU0OCA4IDEuMzQ5MTggOCAxLjM0OTE4Ii8+CiAgICAgICAgPHBhdGggY2xhc3M9InN0cm9rZS1saW5lam9pbi1yb3VuZCIgZD0iTTggNFY5Ii8+CiAgICAgICAgPHBhdGggY2xhc3M9InN0cm9rZS1saW5lam9pbi1yb3VuZCIgZD0iTTggMTBWMTIiLz4KICAgIDwvZz4KPC9zdmc+");
    background-color: crimson;
}
.ace_icon_svg.ace_warning {
    -webkit-mask-image: url("data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAyMCAxNiI+CjxnIHN0cm9rZS13aWR0aD0iMiIgc3Ryb2tlPSJkYXJrb3JhbmdlIiBzaGFwZS1yZW5kZXJpbmc9Imdlb21ldHJpY1ByZWNpc2lvbiI+Cjxwb2x5Z29uIHN0cm9rZS1saW5lam9pbj0icm91bmQiIGZpbGw9Im5vbmUiIHBvaW50cz0iOCAxIDE1IDE1IDEgMTUgOCAxIi8+CjxyZWN0IHg9IjgiIHk9IjEyIiB3aWR0aD0iMC4wMSIgaGVpZ2h0PSIwLjAxIi8+CjxsaW5lIHgxPSI4IiB5MT0iNiIgeDI9IjgiIHkyPSIxMCIvPgo8L2c+Cjwvc3ZnPg==");
    background-color: darkorange;
}
.ace_icon_svg.ace_info {
    -webkit-mask-image: url("data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAyMCAxNiI+CjxnIHN0cm9rZS13aWR0aD0iMiIgc3Ryb2tlPSJibHVlIiBzaGFwZS1yZW5kZXJpbmc9Imdlb21ldHJpY1ByZWNpc2lvbiI+CjxjaXJjbGUgZmlsbD0ibm9uZSIgY3g9IjgiIGN5PSI4IiByPSI3IiBzdHJva2UtbGluZWpvaW49InJvdW5kIi8+Cjxwb2x5bGluZSBwb2ludHM9IjggMTEgOCA4Ii8+Cjxwb2x5bGluZSBwb2ludHM9IjkgOCA2IDgiLz4KPGxpbmUgeDE9IjEwIiB5MT0iMTEiIHgyPSI2IiB5Mj0iMTEiLz4KPHJlY3QgeD0iOCIgeT0iNSIgd2lkdGg9IjAuMDEiIGhlaWdodD0iMC4wMSIvPgo8L2c+Cjwvc3ZnPg==");
    background-color: royalblue;
}
.ace_icon_svg.ace_hint {
    -webkit-mask-image: url("data:image/svg+xml;base64,PHN2ZyB2aWV3Qm94PSIwIDAgMjAgMTYiIHhtbG5zPSJodHRwOi8vd3d3LnczLm9yZy8yMDAwL3N2ZyI+CiAgICA8ZyBzdHJva2Utd2lkdGg9IjIiIHN0cm9rZT0ic2lsdmVyIiBmaWxsPSJub25lIiBzaGFwZS1yZW5kZXJpbmc9Imdlb21ldHJpY1ByZWNpc2lvbiI+CiAgICAgICAgPHBhdGggY2xhc3M9InN0cm9rZS1saW5lam9pbi1yb3VuZCIgZD0iTTYgMTRIMTAiLz4KICAgICAgICA8cGF0aCBkPSJNOCAxMUg5QzkgOS40NzAwMiAxMiA4LjU0MDAyIDEyIDUuNzYwMDJDMTIuMDIgNC40MDAwMiAxMS4zOSAzLjM2MDAyIDEwLjQzIDIuNjcwMDJDOSAxLjY0MDAyIDcuMDAwMDEgMS42NDAwMiA1LjU3MDAxIDIuNjcwMDJDNC42MTAwMSAzLjM2MDAyIDMuOTggNC40MDAwMiA0IDUuNzYwMDJDNCA4LjU0MDAyIDcuMDAwMDEgOS40NzAwMiA3LjAwMDAxIDExSDhaIi8+CiAgICA8L2c+Cjwvc3ZnPg==");
    background-color: silver;
}

.ace_icon_svg.ace_error_fold {
    -webkit-mask-image: url("data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAyMCAxNiIgZmlsbD0ibm9uZSI+CiAgPHBhdGggZD0ibSAxOC45Mjk4NTEsNy44Mjk4MDc2IGMgMC4xNDYzNTMsNi4zMzc0NjA0IC02LjMyMzE0Nyw3Ljc3Nzg0NDQgLTcuNDc3OTEyLDcuNzc3ODQ0NCAtMi4xMDcyNzI2LC0wLjEyODc1IDUuMTE3Njc4LDAuMzU2MjQ5IDUuMDUxNjk4LC03Ljg3MDA2MTggLTAuNjA0NjcyLC04LjAwMzk3MzQ5IC03LjA3NzI3MDYsLTcuNTYzMTE4OSAtNC44NTczLC03LjQzMDM5NTU2IDEuNjA2LC0wLjExNTE0MjI1IDYuODk3NDg1LDEuMjYyNTQ1OTYgNy4yODM1MTQsNy41MjI2MTI5NiB6IiBmaWxsPSJjcmltc29uIiBzdHJva2Utd2lkdGg9IjIiLz4KICA8cGF0aCBmaWxsLXJ1bGU9ImV2ZW5vZGQiIGNsaXAtcnVsZT0iZXZlbm9kZCIgZD0ibSA4LjExNDc1NjIsMi4wNTI5ODI4IGMgMy4zNDkxNjk4LDAgNi4wNjQxMzI4LDIuNjc2ODYyNyA2LjA2NDEzMjgsNS45Nzg5NTMgMCwzLjMwMjExMjIgLTIuNzE0OTYzLDUuOTc4OTIwMiAtNi4wNjQxMzI4LDUuOTc4OTIwMiAtMy4zNDkxNDczLDAgLTYuMDY0MTc3MiwtMi42NzY4MDggLTYuMDY0MTc3MiwtNS45Nzg5MjAyIDAuMDA1MzksLTMuMjk5ODg2MSAyLjcxNzI2NTYsLTUuOTczNjQwOCA2LjA2NDE3NzIsLTUuOTc4OTUzIHogbSAwLC0xLjczNTgyNzE5IGMgLTQuMzIxNDgzNiwwIC03LjgyNDc0MDM4LDMuNDU0MDE4NDkgLTcuODI0NzQwMzgsNy43MTQ3ODAxOSAwLDQuMjYwNzI4MiAzLjUwMzI1Njc4LDcuNzE0NzQ1MiA3LjgyNDc0MDM4LDcuNzE0NzQ1MiA0LjMyMTQ0OTgsMCA3LjgyNDY5OTgsLTMuNDU0MDE3IDcuODI0Njk5OCwtNy43MTQ3NDUyIDAsLTIuMDQ2MDkxNCAtMC44MjQzOTIsLTQuMDA4MzY3MiAtMi4yOTE3NTYsLTUuNDU1MTc0NiBDIDEyLjE4MDIyNSwxLjEyOTk2NDggMTAuMTkwMDEzLDAuMzE3MTU1NjEgOC4xMTQ3NTYyLDAuMzE3MTU1NjEgWiBNIDYuOTM3NDU2Myw4LjI0MDU5ODUgNC42NzE4Njg1LDEwLjQ4NTg1MiA2LjAwODY4MTQsMTEuODc2NzI4IDguMzE3MDAzNSw5LjYwMDc5MTEgMTAuNjI1MzM3LDExLjg3NjcyOCAxMS45NjIxMzgsMTAuNDg1ODUyIDkuNjk2NTUwOCw4LjI0MDU5ODUgMTEuOTYyMTM4LDYuMDA2ODA2NiAxMC41NzMyNDYsNC42Mzc0MzM1IDguMzE3MDAzNSw2Ljg3MzQyOTcgNi4wNjA3NjA3LDQuNjM3NDMzNSA0LjY3MTg2ODUsNi4wMDY4MDY2IFoiIGZpbGw9ImNyaW1zb24iIHN0cm9rZS13aWR0aD0iMiIvPgo8L3N2Zz4=");
    background-color: crimson;
}
.ace_icon_svg.ace_security_fold {
    -webkit-mask-image: url("data:image/svg+xml;base64,CjxzdmcgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIiB2aWV3Qm94PSIwIDAgMTcgMTQiIGZpbGw9Im5vbmUiPgogICAgPHBhdGggZD0iTTEwLjAwMDEgMTMuNjk5MkMxMC4wMDAxIDEzLjY5OTIgMTEuOTI0MSAxMy40NzYzIDEzIDEyLjY5OTJDMTQuNDEzOSAxMS42NzgxIDE2IDEwLjUgMTYuMTI1MSA2LjgxMTI2VjIuNTg5ODdDMTYuMTI1MSAyLjU0NzY4IDE2LjEyMjEgMi41MDYxOSAxNi4xMTY0IDIuNDY1NTlWMS43MTQ4NUgxNS4yNDE0TDE1LjIzMDcgMS43MTQ4NEwxNC42MjUxIDEuNjk5MjJWNi44MTEyM0MxNC42MjUxIDguNTEwNjEgMTQuNjI1MSA5LjQ2NDYxIDEyLjc4MjQgMTEuNzIxQzEyLjE1ODYgMTIuNDg0OCAxMC4wMDAxIDEzLjY5OTIgMTAuMDAwMSAxMy42OTkyWiIgZmlsbD0iY3JpbXNvbiIgc3Ryb2tlLXdpZHRoPSIyIi8+CiAgICA8cGF0aCBmaWxsLXJ1bGU9ImV2ZW5vZGQiIGNsaXAtcnVsZT0iZXZlbm9kZCIgZD0iTTcuMzM2MDkgMC4zNjc0NzVDNy4wMzIxNCAwLjE1MjY1MiA2LjYyNTQ4IDAuMTUzNjE0IDYuMzIyNTMgMC4zNjk5OTdMNi4zMDg2OSAwLjM3OTU1NEM2LjI5NTUzIDAuMzg4NTg4IDYuMjczODggMC40MDMyNjYgNi4yNDQxNyAwLjQyMjc4OUM2LjE4NDcxIDAuNDYxODYgNi4wOTMyMSAwLjUyMDE3MSA1Ljk3MzEzIDAuNTkxMzczQzUuNzMyNTEgMC43MzQwNTkgNS4zNzk5IDAuOTI2ODY0IDQuOTQyNzkgMS4xMjAwOUM0LjA2MTQ0IDEuNTA5NyAyLjg3NTQxIDEuODgzNzcgMS41ODk4NCAxLjg4Mzc3SDAuNzE0ODQ0VjIuNzU4NzdWNi45ODAxNUMwLjcxNDg0NCA5LjQ5Mzc0IDIuMjg4NjYgMTEuMTk3MyAzLjcwMjU0IDEyLjIxODVDNC40MTg0NSAxMi43MzU1IDUuMTI4NzQgMTMuMTA1MyA1LjY1NzMzIDEzLjM0NTdDNS45MjI4NCAxMy40NjY0IDYuMTQ1NjYgMTMuNTU1OSA2LjMwNDY1IDEzLjYxNjFDNi4zODQyMyAxMy42NDYyIDYuNDQ4MDUgMTMuNjY5IDYuNDkzNDkgMTMuNjg0OEM2LjUxNjIyIDEzLjY5MjcgNi41MzQzOCAxMy42OTg5IDYuNTQ3NjQgMTMuNzAzM0w2LjU2MzgyIDEzLjcwODdMNi41NjkwOCAxMy43MTA0TDYuNTcwOTkgMTMuNzExTDYuODM5ODQgMTMuNzUzM0w2LjU3MjQyIDEzLjcxMTVDNi43NDYzMyAxMy43NjczIDYuOTMzMzUgMTMuNzY3MyA3LjEwNzI3IDEzLjcxMTVMNy4xMDg3IDEzLjcxMUw3LjExMDYxIDEzLjcxMDRMNy4xMTU4NyAxMy43MDg3TDcuMTMyMDUgMTMuNzAzM0M3LjE0NTMxIDEzLjY5ODkgNy4xNjM0NiAxMy42OTI3IDcuMTg2MTkgMTMuNjg0OEM3LjIzMTY0IDEzLjY2OSA3LjI5NTQ2IDEzLjY0NjIgNy4zNzUwMyAxMy42MTYxQzcuNTM0MDMgMTMuNTU1OSA3Ljc1Njg1IDEzLjQ2NjQgOC4wMjIzNiAxMy4zNDU3QzguNTUwOTUgMTMuMTA1MyA5LjI2MTIzIDEyLjczNTUgOS45NzcxNSAxMi4yMTg1QzExLjM5MSAxMS4xOTczIDEyLjk2NDggOS40OTM3NyAxMi45NjQ4IDYuOTgwMThWMi43NTg4QzEyLjk2NDggMi43MTY2IDEyLjk2MTkgMi42NzUxMSAxMi45NTYxIDIuNjM0NTFWMS44ODM3N0gxMi4wODExQzEyLjA3NzUgMS44ODM3NyAxMi4wNzQgMS44ODM3NyAxMi4wNzA0IDEuODgzNzdDMTAuNzk3OSAxLjg4MDA0IDkuNjE5NjIgMS41MTEwMiA4LjczODk0IDEuMTI0ODZDOC43MzUzNCAxLjEyMzI3IDguNzMxNzQgMS4xMjE2OCA4LjcyODE0IDEuMTIwMDlDOC4yOTEwMyAwLjkyNjg2NCA3LjkzODQyIDAuNzM0MDU5IDcuNjk3NzkgMC41OTEzNzNDNy41Nzc3MiAwLjUyMDE3MSA3LjQ4NjIyIDAuNDYxODYgNy40MjY3NiAwLjQyMjc4OUM3LjM5NzA1IDAuNDAzMjY2IDcuMzc1MzkgMC4zODg1ODggNy4zNjIyNCAwLjM3OTU1NEw3LjM0ODk2IDAuMzcwMzVDNy4zNDg5NiAwLjM3MDM1IDcuMzQ4NDcgMC4zNzAwMiA3LjM0NTYzIDAuMzc0MDU0TDcuMzM3NzkgMC4zNjg2NTlMNy4zMzYwOSAwLjM2NzQ3NVpNOC4wMzQ3MSAyLjcyNjkxQzguODYwNCAzLjA5MDYzIDkuOTYwNjYgMy40NjMwOSAxMS4yMDYxIDMuNTg5MDdWNi45ODAxNUgxMS4yMTQ4QzExLjIxNDggOC42Nzk1MyAxMC4xNjM3IDkuOTI1MDcgOC45NTI1NCAxMC43OTk4QzguMzU1OTUgMTEuMjMwNiA3Ljc1Mzc0IDExLjU0NTQgNy4yOTc5NiAxMS43NTI3QzcuMTE2NzEgMTEuODM1MSA2Ljk2MDYyIDExLjg5OTYgNi44Mzk4NCAxMS45NDY5QzYuNzE5MDYgMTEuODk5NiA2LjU2Mjk3IDExLjgzNTEgNi4zODE3MyAxMS43NTI3QzUuOTI1OTUgMTEuNTQ1NCA1LjMyMzczIDExLjIzMDYgNC43MjcxNSAxMC43OTk4QzMuNTE2MDMgOS45MjUwNyAyLjQ2NDg0IDguNjc5NTUgMi40NjQ4NCA2Ljk4MDE4VjMuNTg5MDlDMy43MTczOCAzLjQ2MjM5IDQuODIzMDggMy4wODYzOSA1LjY1MDMzIDIuNzIwNzFDNi4xNDIyOCAyLjUwMzI0IDYuNTQ0ODUgMi4yODUzNyA2LjgzMjU0IDIuMTE2MjRDNy4xMjE4MSAyLjI4NTM1IDcuNTI3IDIuNTAzNTIgOC4wMjE5NiAyLjcyMTMxQzguMDI2MiAyLjcyMzE3IDguMDMwNDUgMi43MjUwNCA4LjAzNDcxIDIuNzI2OTFaTTUuOTY0ODQgMy40MDE0N1Y3Ljc3NjQ3SDcuNzE0ODRWMy40MDE0N0g1Ljk2NDg0Wk01Ljk2NDg0IDEwLjQwMTVWOC42NTE0N0g3LjcxNDg0VjEwLjQwMTVINS45NjQ4NFoiIGZpbGw9ImNyaW1zb24iIHN0cm9rZS13aWR0aD0iMiIvPgo8L3N2Zz4=");
    background-color: crimson;
}
.ace_icon_svg.ace_warning_fold {
    -webkit-mask-image: url("data:image/svg+xml;base64,PHN2ZyB3aWR0aD0iMjAiIGhlaWdodD0iMTYiIHZpZXdCb3g9IjAgMCAyMCAxNiIgZmlsbD0ibm9uZSIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIj4KPHBhdGggZmlsbC1ydWxlPSJldmVub2RkIiBjbGlwLXJ1bGU9ImV2ZW5vZGQiIGQ9Ik0xNC43NzY5IDE0LjczMzdMOC42NTE5MiAyLjQ4MzY5QzguMzI5NDYgMS44Mzg3NyA3LjQwOTEzIDEuODM4NzcgNy4wODY2NyAyLjQ4MzY5TDAuOTYxNjY5IDE0LjczMzdDMC42NzA3NzUgMTUuMzE1NSAxLjA5MzgzIDE2IDEuNzQ0MjkgMTZIMTMuOTk0M0MxNC42NDQ4IDE2IDE1LjA2NzggMTUuMzE1NSAxNC43NzY5IDE0LjczMzdaTTMuMTYwMDcgMTQuMjVMNy44NjkyOSA0LjgzMTU2TDEyLjU3ODUgMTQuMjVIMy4xNjAwN1pNOC43NDQyOSAxMS42MjVWMTMuMzc1SDYuOTk0MjlWMTEuNjI1SDguNzQ0MjlaTTYuOTk0MjkgMTAuNzVWNy4yNUg4Ljc0NDI5VjEwLjc1SDYuOTk0MjlaIiBmaWxsPSIjRUM3MjExIi8+CjxwYXRoIGQ9Ik0xMS4xOTkxIDIuOTUyMzhDMTAuODgwOSAyLjMxNDY3IDEwLjM1MzcgMS44MDUyNiA5LjcwNTUgMS41MDlMMTEuMDQxIDEuMDY5NzhDMTEuNjg4MyAwLjk0OTgxNCAxMi4zMzcgMS4yNzI2MyAxMi42MzE3IDEuODYxNDFMMTcuNjEzNiAxMS44MTYxQzE4LjM1MjcgMTMuMjkyOSAxNy41OTM4IDE1LjA4MDQgMTYuMDE4IDE1LjU3NDVDMTYuNDA0NCAxNC40NTA3IDE2LjMyMzEgMTMuMjE4OCAxNS43OTI0IDEyLjE1NTVMMTEuMTk5MSAyLjk1MjM4WiIgZmlsbD0iI0VDNzIxMSIvPgo8L3N2Zz4=");
    background-color: darkorange;
}

.ace_scrollbar {
    contain: strict;
    position: absolute;
    right: 0;
    bottom: 0;
    z-index: 6;
}

.ace_scrollbar-inner {
    position: absolute;
    cursor: text;
    left: 0;
    top: 0;
}

.ace_scrollbar-v{
    overflow-x: hidden;
    overflow-y: scroll;
    top: 0;
}

.ace_scrollbar-h {
    overflow-x: scroll;
    overflow-y: hidden;
    left: 0;
}

.ace_print-margin {
    position: absolute;
    height: 100%;
}

.ace_text-input {
    position: absolute;
    z-index: 0;
    width: 0.5em;
    height: 1em;
    opacity: 0;
    background: transparent;
    -moz-appearance: none;
    appearance: none;
    border: none;
    resize: none;
    outline: none;
    overflow: hidden;
    font: inherit;
    padding: 0 1px;
    margin: 0 -1px;
    contain: strict;
    -ms-user-select: text;
    -moz-user-select: text;
    -webkit-user-select: text;
    user-select: text;
    /*with `pre-line` chrome inserts &nbsp; instead of space*/
    white-space: pre!important;
}
.ace_text-input.ace_composition {
    background: transparent;
    color: inherit;
    z-index: 1000;
    opacity: 1;
}
.ace_composition_placeholder { color: transparent }
.ace_composition_marker { 
    border-bottom: 1px solid;
    position: absolute;
    border-radius: 0;
    margin-top: 1px;
}

[ace_nocontext=true] {
    transform: none!important;
    filter: none!important;
    clip-path: none!important;
    mask : none!important;
    contain: none!important;
    perspective: none!important;
    mix-blend-mode: initial!important;
    z-index: auto;
}

.ace_layer {
    z-index: 1;
    position: absolute;
    overflow: hidden;
    /* workaround for chrome bug https://github.com/ajaxorg/ace/issues/2312*/
    word-wrap: normal;
    white-space: pre;
    height: 100%;
    width: 100%;
    box-sizing: border-box;
    /* setting pointer-events: auto; on node under the mouse, which changes
        during scroll, will break mouse wheel scrolling in Safari */
    pointer-events: none;
}

.ace_gutter-layer {
    position: relative;
    width: auto;
    text-align: right;
    pointer-events: auto;
    height: 1000000px;
    contain: style size layout;
}

.ace_text-layer {
    font: inherit !important;
    position: absolute;
    height: 1000000px;
    width: 1000000px;
    contain: style size layout;
}

.ace_text-layer > .ace_line, .ace_text-layer > .ace_line_group {
    contain: style size layout;
    position: absolute;
    top: 0;
    left: 0;
    right: 0;
}

.ace_hidpi .ace_text-layer,
.ace_hidpi .ace_gutter-layer,
.ace_hidpi .ace_content,
.ace_hidpi .ace_gutter {
    contain: strict;
}
.ace_hidpi .ace_text-layer > .ace_line, 
.ace_hidpi .ace_text-layer > .ace_line_group {
    contain: strict;
}

.ace_cjk {
    display: inline-block;
    text-align: center;
}

.ace_cursor-layer {
    z-index: 4;
}

.ace_cursor {
    z-index: 4;
    position: absolute;
    box-sizing: border-box;
    border-left: 2px solid;
    /* workaround for smooth cursor repaintng whole screen in chrome */
    transform: translatez(0);
}

.ace_multiselect .ace_cursor {
    border-left-width: 1px;
}

.ace_slim-cursors .ace_cursor {
    border-left-width: 1px;
}

.ace_overwrite-cursors .ace_cursor {
    border-left-width: 0;
    border-bottom: 1px solid;
}

.ace_hidden-cursors .ace_cursor {
    opacity: 0.2;
}

.ace_hasPlaceholder .ace_hidden-cursors .ace_cursor {
    opacity: 0;
}

.ace_smooth-blinking .ace_cursor {
    transition: opacity 0.18s;
}

.ace_animate-blinking .ace_cursor {
    animation-duration: 1000ms;
    animation-timing-function: step-end;
    animation-name: blink-ace-animate;
    animation-iteration-count: infinite;
}

.ace_animate-blinking.ace_smooth-blinking .ace_cursor {
    animation-duration: 1000ms;
    animation-timing-function: ease-in-out;
    animation-name: blink-ace-animate-smooth;
}
    
@keyframes blink-ace-animate {
    from, to { opacity: 1; }
    60% { opacity: 0; }
}

@keyframes blink-ace-animate-smooth {
    from, to { opacity: 1; }
    45% { opacity: 1; }
    60% { opacity: 0; }
    85% { opacity: 0; }
}

.ace_marker-layer .ace_step, .ace_marker-layer .ace_stack {
    position: absolute;
    z-index: 3;
}

.ace_marker-layer .ace_selection {
    position: absolute;
    z-index: 5;
}

.ace_marker-layer .ace_bracket {
    position: absolute;
    z-index: 6;
}

.ace_marker-layer .ace_error_bracket {
    position: absolute;
    border-bottom: 1px solid #DE5555;
    border-radius: 0;
}

.ace_marker-layer .ace_active-line {
    position: absolute;
    z-index: 2;
}

.ace_marker-layer .ace_selected-word {
    position: absolute;
    z-index: 4;
    box-sizing: border-box;
}

.ace_line .ace_fold {
    box-sizing: border-box;

    display: inline-block;
    height: 11px;
    margin-top: -2px;
    vertical-align: middle;

    background-image:
        url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABEAAAAJCAYAAADU6McMAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAJpJREFUeNpi/P//PwOlgAXGYGRklAVSokD8GmjwY1wasKljQpYACtpCFeADcHVQfQyMQAwzwAZI3wJKvCLkfKBaMSClBlR7BOQikCFGQEErIH0VqkabiGCAqwUadAzZJRxQr/0gwiXIal8zQQPnNVTgJ1TdawL0T5gBIP1MUJNhBv2HKoQHHjqNrA4WO4zY0glyNKLT2KIfIMAAQsdgGiXvgnYAAAAASUVORK5CYII="),
        url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAA3CAYAAADNNiA5AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAACJJREFUeNpi+P//fxgTAwPDBxDxD078RSX+YeEyDFMCIMAAI3INmXiwf2YAAAAASUVORK5CYII=");
    background-repeat: no-repeat, repeat-x;
    background-position: center center, top left;
    color: transparent;

    border: 1px solid black;
    border-radius: 2px;

    cursor: pointer;
    pointer-events: auto;
}

.ace_dark .ace_fold {
}

.ace_fold:hover{
    background-image:
        url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABEAAAAJCAYAAADU6McMAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAJpJREFUeNpi/P//PwOlgAXGYGRklAVSokD8GmjwY1wasKljQpYACtpCFeADcHVQfQyMQAwzwAZI3wJKvCLkfKBaMSClBlR7BOQikCFGQEErIH0VqkabiGCAqwUadAzZJRxQr/0gwiXIal8zQQPnNVTgJ1TdawL0T5gBIP1MUJNhBv2HKoQHHjqNrA4WO4zY0glyNKLT2KIfIMAAQsdgGiXvgnYAAAAASUVORK5CYII="),
        url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAA3CAYAAADNNiA5AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAACBJREFUeNpi+P//fz4TAwPDZxDxD5X4i5fLMEwJgAADAEPVDbjNw87ZAAAAAElFTkSuQmCC");
}

.ace_tooltip {
    background-color: #f5f5f5;
    border: 1px solid gray;
    border-radius: 1px;
    box-shadow: 0 1px 2px rgba(0, 0, 0, 0.3);
    color: black;
    padding: 3px 4px;
    position: fixed;
    z-index: 999999;
    box-sizing: border-box;
    cursor: default;
    white-space: pre-wrap;
    word-wrap: break-word;
    line-height: normal;
    font-style: normal;
    font-weight: normal;
    letter-spacing: normal;
    pointer-events: none;
    overflow: auto;
    max-width: min(33em, 66vw);
    overscroll-behavior: contain;
}
.ace_tooltip pre {
    white-space: pre-wrap;
}

.ace_tooltip.ace_dark {
    background-color: #636363;
    color: #fff;
}

.ace_tooltip:focus {
    outline: 1px solid #5E9ED6;
}

.ace_icon {
    display: inline-block;
    width: 18px;
    vertical-align: top;
}

.ace_icon_svg {
    display: inline-block;
    width: 12px;
    vertical-align: top;
    -webkit-mask-repeat: no-repeat;
    -webkit-mask-size: 12px;
    -webkit-mask-position: center;
}

.ace_folding-enabled > .ace_gutter-cell, .ace_folding-enabled > .ace_gutter-cell_svg-icons {
    padding-right: 13px;
}

.ace_fold-widget, .ace_custom-widget {
    box-sizing: border-box;

    margin: 0 -12px 0 1px;
    display: none;
    width: 11px;
    vertical-align: top;

    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAANElEQVR42mWKsQ0AMAzC8ixLlrzQjzmBiEjp0A6WwBCSPgKAXoLkqSot7nN3yMwR7pZ32NzpKkVoDBUxKAAAAABJRU5ErkJggg==");
    background-repeat: no-repeat;
    background-position: center;

    border-radius: 3px;
    
    border: 1px solid transparent;
    cursor: pointer;
    pointer-events: auto;
}

.ace_custom-widget {
    background: none;
}

.ace_folding-enabled .ace_fold-widget {
    display: inline-block;   
}

.ace_fold-widget.ace_end {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAANElEQVR42m3HwQkAMAhD0YzsRchFKI7sAikeWkrxwScEB0nh5e7KTPWimZki4tYfVbX+MNl4pyZXejUO1QAAAABJRU5ErkJggg==");
}

.ace_fold-widget.ace_closed {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAMAAAAGCAYAAAAG5SQMAAAAOUlEQVR42jXKwQkAMAgDwKwqKD4EwQ26sSOkVWjgIIHAzPiCgaqiqnJHZnKICBERHN194O5b9vbLuAVRL+l0YWnZAAAAAElFTkSuQmCCXA==");
}

.ace_fold-widget:hover {
    border: 1px solid rgba(0, 0, 0, 0.3);
    background-color: rgba(255, 255, 255, 0.2);
    box-shadow: 0 1px 1px rgba(255, 255, 255, 0.7);
}

.ace_fold-widget:active {
    border: 1px solid rgba(0, 0, 0, 0.4);
    background-color: rgba(0, 0, 0, 0.05);
    box-shadow: 0 1px 1px rgba(255, 255, 255, 0.8);
}
/**
 * Dark version for fold widgets
 */
.ace_dark .ace_fold-widget {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAAHklEQVQIW2P4//8/AzoGEQ7oGCaLLAhWiSwB146BAQCSTPYocqT0AAAAAElFTkSuQmCC");
}
.ace_dark .ace_fold-widget.ace_end {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAAH0lEQVQIW2P4//8/AxQ7wNjIAjDMgC4AxjCVKBirIAAF0kz2rlhxpAAAAABJRU5ErkJggg==");
}
.ace_dark .ace_fold-widget.ace_closed {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAMAAAAFCAYAAACAcVaiAAAAHElEQVQIW2P4//+/AxAzgDADlOOAznHAKgPWAwARji8UIDTfQQAAAABJRU5ErkJggg==");
}
.ace_dark .ace_fold-widget:hover {
    box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);
    background-color: rgba(255, 255, 255, 0.1);
}
.ace_dark .ace_fold-widget:active {
    box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);
}

.ace_inline_button {
    border: 1px solid lightgray;
    display: inline-block;
    margin: -1px 8px;
    padding: 0 5px;
    pointer-events: auto;
    cursor: pointer;
}
.ace_inline_button:hover {
    border-color: gray;
    background: rgba(200,200,200,0.2);
    display: inline-block;
    pointer-events: auto;
}

.ace_fold-widget.ace_invalid {
    background-color: #FFB4B4;
    border-color: #DE5555;
}

.ace_fade-fold-widgets .ace_fold-widget {
    transition: opacity 0.4s ease 0.05s;
    opacity: 0;
}

.ace_fade-fold-widgets:hover .ace_fold-widget {
    transition: opacity 0.05s ease 0.05s;
    opacity:1;
}

.ace_underline {
    text-decoration: underline;
}

.ace_bold {
    font-weight: bold;
}

.ace_nobold .ace_bold {
    font-weight: normal;
}

.ace_italic {
    font-style: italic;
}


.ace_error-marker {
    background-color: rgba(255, 0, 0,0.2);
    position: absolute;
    z-index: 9;
}

.ace_highlight-marker {
    background-color: rgba(255, 255, 0,0.2);
    position: absolute;
    z-index: 8;
}

.ace_mobile-menu {
    position: absolute;
    line-height: 1.5;
    border-radius: 4px;
    -ms-user-select: none;
    -moz-user-select: none;
    -webkit-user-select: none;
    user-select: none;
    background: white;
    box-shadow: 1px 3px 2px grey;
    border: 1px solid #dcdcdc;
    color: black;
}
.ace_dark > .ace_mobile-menu {
    background: #333;
    color: #ccc;
    box-shadow: 1px 3px 2px grey;
    border: 1px solid #444;

}
.ace_mobile-button {
    padding: 2px;
    cursor: pointer;
    overflow: hidden;
}
.ace_mobile-button:hover {
    background-color: #eee;
    opacity:1;
}
.ace_mobile-button:active {
    background-color: #ddd;
}

.ace_placeholder {
    position: relative;
    font-family: arial;
    transform: scale(0.9);
    transform-origin: left;
    white-space: pre;
    opacity: 0.7;
    margin: 0 10px;
    z-index: 1;
}

.ace_ghost_text {
    opacity: 0.5;
    font-style: italic;
}

.ace_ghost_text_container > div {
    white-space: pre;
}

.ghost_text_line_wrapped::after {
    content: "↩";
    position: absolute;
}

.ace_lineWidgetContainer.ace_ghost_text {
    margin: 0px 4px
}

.ace_screenreader-only {
    position:absolute;
    left:-10000px;
    top:auto;
    width:1px;
    height:1px;
    overflow:hidden;
}

.ace_hidden_token {
    display: none;
}
/*# sourceURL=ace/css/ace_editor.css */</style><style id="ace_scrollbar.css">.ace_editor>.ace_sb-v div, .ace_editor>.ace_sb-h div{
  position: absolute;
  background: rgba(128, 128, 128, 0.6);
  -moz-box-sizing: border-box;
  box-sizing: border-box;
  border: 1px solid #bbb;
  border-radius: 2px;
  z-index: 8;
}
.ace_editor>.ace_sb-v, .ace_editor>.ace_sb-h {
  position: absolute;
  z-index: 6;
  background: none;
  overflow: hidden!important;
}
.ace_editor>.ace_sb-v {
  z-index: 6;
  right: 0;
  top: 0;
  width: 12px;
}
.ace_editor>.ace_sb-v div {
  z-index: 8;
  right: 0;
  width: 100%;
}
.ace_editor>.ace_sb-h {
  bottom: 0;
  left: 0;
  height: 12px;
}
.ace_editor>.ace_sb-h div {
  bottom: 0;
  height: 100%;
}
.ace_editor>.ace_sb_grabbed {
  z-index: 8;
  background: #000;
}
/*# sourceURL=ace/css/ace_scrollbar.css */</style><meta name="emotion-insertion-point" content="">
    <link rel="icon" href="https://www.codechef.com/favicon.ico" type="image/x-icon">
    <title>Online C++ Compiler and Visualizer</title>
    
    <meta name="description" content="Welcome to our AI-powered online C++ compiler, the perfect platform to run and test your C++ code efficiently. Our tool makes coding easy for developers of any skill level, whether you're a beginner or experienced.">
    <meta name="og:image" content="https://cdn.codechef.com/sites/all/themes/abessive/cc-logo.png">
    <meta name="og:type" content="website">
    <meta name="theme-color" content="#000000">
    <meta name="robots" content="index, follow">
    <link rel="canonical" href="https://www.codechef.com/cpp-online-compiler">
    <script type="text/javascript" async="" src="./KMP_files/analytics.js.download"></script><script type="text/javascript" async="" src="./KMP_files/js"></script><script async="" src="./KMP_files/gtm.js.download"></script><script async="" src="./KMP_files/client" type="text/javascript"></script>
    
    
    <link rel="prefetch" href="./KMP_files/cc-logo.svg" as="image" type="image/svg+xml">
    <link href="./KMP_files/css2" rel="stylesheet">

    <!-- Initial loader classes -->
  <style>
    @keyframes spin {
      0% {
        transform: rotate(0deg);
      }
      100% {
        transform: rotate(360deg);
      }
    }

    .loadingIcon {
      border: 0.4em solid rgba(0, 0, 0, 0.0);
      border-top: 0.4em solid #2A67B1;
      border-radius: 50%;
      width: 4em;
      height: 4em;
      animation: spin 1s linear infinite;
      color: #2A67B1;
    }

    .loading {
      width: 100%;
      height: 100vh;
      display: flex;
      flex-direction: column;
      justify-content: center;
      align-items: center;
      color: rgb(108, 116, 134);
      background: inherit;
      z-index: 100;
      position: absolute;
    }

    .message {
      padding: 16px;
      text-align: center;
      font-family: sans-serif;
    }

    /* Dark Mode styles */
    .loader-icon-dark {
      border-top: 0.4em solid #5780b0;
    }
    .dark {
      background: #1d1e23;
      color: rgb(255 255 255 / 60%);
    }
  </style>
  <script type="text/javascript">

    const languageIdeRoutes = [
      'python', 'java', 'cpp', 'c', 'pypy', 'csharp', 'javascript', 'go', 'php', 'kotlin', 'rust', 'r', 'sql', 'html',
      'oracledb', 'react'
    ];
    
    if (
      (['faq', 'pro', 'contests'].includes(window.location.pathname.split('/').filter(Boolean).pop())) ||
      (['learn', 'games', 'viewsolution',
        'submit', 'practice', 'dashboard', 'getting-started', 'college-program', 'practice-old',
        'roadmap', 'blogs', 'roadmaps', 'blogs', 'skill-tests', 'ide', 'mobile'
      ].includes(window.location.pathname.split('/').filter(Boolean)[0])) ||
      (['submit'].includes(window.location.pathname.split('/').filter(Boolean)[1])) ||
      (['status'].includes(window.location.pathname.split('/').filter(Boolean).slice(-2, -1).pop())) || [
        // Regex to match the practice and contest submit routes
        /^\/(submit\/([A-Z]+[A-Z0-9_]*)+|problems\/([A-Z]+[A-Z0-9_]*)+|([A-Z]+[A-Z0-9_]*)+\/submit\/([A-Z]+[A-Z0-9_]*)+|([A-Z]+[A-Z0-9_]*)+\/problems\/([A-Z]+[A-Z0-9_]*)+)$/
      ].some((regexp) => (regexp.test(window.location.pathname))) ||
      (languageIdeRoutes.some(lang => window.location.pathname.includes(`${lang}-online-compiler`)))
    ) {
      const metaElement = document.createElement('meta');
      metaElement.setAttribute('name', 'viewport');
      metaElement.setAttribute('content', 'width=device-width, initial-scale=1');
      document.head.appendChild(metaElement);
    }

    (function (w, d, s, l, i) {
      w[l] = w[l] || [];
      w[l].push({
        'gtm.start': new Date().getTime(),
        event: 'gtm.js'
      });
      var f = d.getElementsByTagName(s)[0],
        j = d.createElement(s),
        dl = l != 'dataLayer' ? '&l=' + l : '';
      j.async = true;
      j.src =
        'https://www.googletagmanager.com/gtm.js?id=' + i + dl;
      f.parentNode.insertBefore(j, f);
    })(window, document, 'script', 'dataLayer', 'GTM-TV5X2M');
  </script>
  <script type="module" crossorigin="" src="./KMP_files/index-BJCTZk52.js.download"></script>
  <link rel="modulepreload" crossorigin="" href="https://www.codechef.com/build/react2/assets/__commonjsHelpers__-BosuxZz1.js">
  <link rel="modulepreload" crossorigin="" href="https://www.codechef.com/build/react2/assets/vendor-mui-C6PxA3Mg.js">
  <link rel="modulepreload" crossorigin="" href="https://www.codechef.com/build/react2/assets/vendor-sweetalert2-CokzRhbv.js">
  <link rel="stylesheet" crossorigin="" href="./KMP_files/index-8JvKpkpw.css">
<meta name="viewport" content="width=device-width, initial-scale=1"><style data-emotion="css-global" data-s=""></style><style data-emotion="css" data-s=""></style><link id="googleidentityservice" type="text/css" media="all" href="./KMP_files/style" rel="stylesheet"><style id="googleidentityservice_button_styles">.qJTHM{-moz-user-select:none;-webkit-user-select:none;-ms-user-select:none;color:#202124;direction:ltr;-webkit-touch-callout:none;font-family:Roboto-Regular,arial,sans-serif;-webkit-font-smoothing:antialiased;font-weight:400;margin:0;overflow:hidden;-webkit-text-size-adjust:100%}.ynRLnc{left:-9999px;position:absolute;top:-9999px}.L6cTce{display:none}.bltWBb{overflow-wrap:break-word;word-break:break-word}.hSRGPd{color:#1a73e8;cursor:pointer;font-weight:500;text-decoration:none}.Bz112c-W3lGp{height:16px;width:16px}.Bz112c-E3DyYd{height:20px;width:20px}.Bz112c-r9oPif{height:24px;width:24px}.Bz112c-u2z5K{height:36px;width:36px}.Bz112c-uaxL4e{border-radius:10px}.LgbsSe-Bz112c{display:block}.S9gUrf-YoZ4jf{border:none;margin:0;padding:0}.S9gUrf-YoZ4jf *{border:none;margin:0;padding:0}.fFW7wc-ibnC6b>.aZ2wEe>div{border-color:#4285f4}.P1ekSe-ZMv3u{-webkit-transition:height .2s linear;transition:height .2s linear}.P1ekSe-ZMv3u>div:first-child{background-color:#1a73e8!important;-webkit-transition:width .3s linear;transition:width .3s linear}.P1ekSe-ZMv3u>div:nth-child(2){background-image:-webkit-gradient(linear,left top,right top,from(rgba(255,255,255,.7)),to(rgba(255,255,255,.7))),-webkit-gradient(linear,left top,right top,from(#1a73e8),to(#1a73e8))!important;background-image:-webkit-linear-gradient(left,rgba(255,255,255,.7),rgba(255,255,255,.7)),-webkit-linear-gradient(left,#1a73e8,#1a73e8)!important;background-image:linear-gradient(90deg,rgba(255,255,255,.7),rgba(255,255,255,.7)),linear-gradient(90deg,#1a73e8,#1a73e8)!important}.P1ekSe-ZMv3u>div:nth-child(3){background-image:-webkit-gradient(linear,left top,right top,from(rgba(255,255,255,.7)),to(rgba(255,255,255,.7))),-webkit-gradient(linear,left top,right top,from(#1a73e8),to(#1a73e8))!important;background-image:-webkit-linear-gradient(left,rgba(255,255,255,.7),rgba(255,255,255,.7)),-webkit-linear-gradient(left,#1a73e8,#1a73e8)!important;background-image:linear-gradient(90deg,rgba(255,255,255,.7),rgba(255,255,255,.7)),linear-gradient(90deg,#1a73e8,#1a73e8)!important}.haAclf{display:inline-block}.nsm7Bb-HzV7m-LgbsSe{border-radius:4px;box-sizing:border-box;-webkit-transition:background-color .218s,border-color .218s;transition:background-color .218s,border-color .218s;-moz-user-select:none;-webkit-user-select:none;-ms-user-select:none;-webkit-appearance:none;background-color:#fff;background-image:none;border:1px solid #dadce0;color:#3c4043;cursor:pointer;font-family:Google Sans,arial,sans-serif;font-size:.875rem;height:40px;letter-spacing:.25px;outline:none;overflow:hidden;padding:0 12px;position:relative;text-align:center;vertical-align:middle;white-space:nowrap;width:auto}.nsm7Bb-HzV7m-LgbsSe.TzA9Ye-LgbsSe{font-size:14px}@media screen and (-ms-high-contrast:active){.nsm7Bb-HzV7m-LgbsSe{border:2px solid windowText;color:windowText}}@media screen and (preferes-contrast:more){.nsm7Bb-HzV7m-LgbsSe{color:#000}}.nsm7Bb-HzV7m-LgbsSe.pSzOP-SxQuSe{font-size:.875rem;height:32px;letter-spacing:.25px;padding:0 10px}.nsm7Bb-HzV7m-LgbsSe.pSzOP-SxQuSe.TzA9Ye-LgbsSe{font-size:14px}.nsm7Bb-HzV7m-LgbsSe.purZT-SxQuSe{font-size:.6875rem;height:20px;letter-spacing:.3px;padding:0 8px}.nsm7Bb-HzV7m-LgbsSe.purZT-SxQuSe.TzA9Ye-LgbsSe{font-size:11px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe{padding:0;width:40px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe.pSzOP-SxQuSe{width:32px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe.purZT-SxQuSe{width:20px}.nsm7Bb-HzV7m-LgbsSe.JGcpL-RbRzK{border-radius:20px}.nsm7Bb-HzV7m-LgbsSe.JGcpL-RbRzK.pSzOP-SxQuSe{border-radius:16px}.nsm7Bb-HzV7m-LgbsSe.JGcpL-RbRzK.purZT-SxQuSe{border-radius:10px}.nsm7Bb-HzV7m-LgbsSe.i5vt6e-to915-Ia7Qfc{border:1px solid #8e918f;background-color:#131314;color:#e3e3e3}.nsm7Bb-HzV7m-LgbsSe.MFS4be-Ia7Qfc{border:none;color:#fff}.nsm7Bb-HzV7m-LgbsSe.MFS4be-v3pZbf-Ia7Qfc{background-color:#1a73e8}.nsm7Bb-HzV7m-LgbsSe.MFS4be-JaPV2b-Ia7Qfc{background-color:#202124;color:#e8eaed}@media screen and (prefers-contrast:more){.nsm7Bb-HzV7m-LgbsSe.MFS4be-JaPV2b-Ia7Qfc{color:#fff}}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{height:18px;margin-right:8px;min-width:18px;width:18px}.nsm7Bb-HzV7m-LgbsSe.pSzOP-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{height:14px;min-width:14px;width:14px}.nsm7Bb-HzV7m-LgbsSe.purZT-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{height:10px;min-width:10px;width:10px}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-Bz112c{margin-left:8px;margin-right:-4px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{margin:0;padding:10px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe.pSzOP-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{padding:8px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe.purZT-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{padding:4px}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{border-top-left-radius:3px;border-bottom-left-radius:3px;display:-webkit-box;display:-webkit-flex;display:flex;-webkit-box-pack:center;-webkit-justify-content:center;justify-content:center;-webkit-box-align:center;-webkit-align-items:center;align-items:center;background-color:#fff;height:36px;margin-left:-10px;margin-right:12px;min-width:36px;width:36px}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf .nsm7Bb-HzV7m-LgbsSe-Bz112c,.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf .nsm7Bb-HzV7m-LgbsSe-Bz112c{margin:0;padding:0}.nsm7Bb-HzV7m-LgbsSe.pSzOP-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{height:28px;margin-left:-8px;margin-right:10px;min-width:28px;width:28px}.nsm7Bb-HzV7m-LgbsSe.purZT-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{height:16px;margin-left:-6px;margin-right:8px;min-width:16px;width:16px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{border-radius:3px;margin-left:2px;margin-right:0;padding:0}.nsm7Bb-HzV7m-LgbsSe.JGcpL-RbRzK .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{border-radius:18px}.nsm7Bb-HzV7m-LgbsSe.pSzOP-SxQuSe.JGcpL-RbRzK .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{border-radius:14px}.nsm7Bb-HzV7m-LgbsSe.purZT-SxQuSe.JGcpL-RbRzK .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{border-radius:8px}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-bN97Pc-sM5MNb{display:-webkit-box;display:-webkit-flex;display:flex;-webkit-align-items:center;-webkit-box-align:center;align-items:center;-webkit-flex-direction:row;-webkit-box-orient:horizontal;-webkit-box-direction:normal;flex-direction:row;-webkit-box-pack:justify;-webkit-justify-content:space-between;justify-content:space-between;-webkit-flex-wrap:nowrap;flex-wrap:nowrap;height:100%;position:relative;width:100%}.nsm7Bb-HzV7m-LgbsSe .oXtfBe-l4eHX{-webkit-box-pack:center;-webkit-justify-content:center;justify-content:center}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-BPrWId{-webkit-flex-grow:1;-webkit-box-flex:1;flex-grow:1;font-family:Google Sans,arial,sans-serif;font-weight:500;overflow:hidden;text-overflow:ellipsis;vertical-align:top}.nsm7Bb-HzV7m-LgbsSe.purZT-SxQuSe .nsm7Bb-HzV7m-LgbsSe-BPrWId{font-weight:300}.nsm7Bb-HzV7m-LgbsSe .oXtfBe-l4eHX .nsm7Bb-HzV7m-LgbsSe-BPrWId{-webkit-flex-grow:0;-webkit-box-flex:0;flex-grow:0}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-MJoBVe{-webkit-transition:background-color .218s;transition:background-color .218s;bottom:0;left:0;position:absolute;right:0;top:0}.nsm7Bb-HzV7m-LgbsSe:focus,.nsm7Bb-HzV7m-LgbsSe:hover{box-shadow:none;border-color:rgb(210,227,252);outline:none}.nsm7Bb-HzV7m-LgbsSe:focus-within{outline:2px solid #00639b;border-color:transparent}.nsm7Bb-HzV7m-LgbsSe:hover .nsm7Bb-HzV7m-LgbsSe-MJoBVe{background:rgba(66,133,244,.08)}.nsm7Bb-HzV7m-LgbsSe:active .nsm7Bb-HzV7m-LgbsSe-MJoBVe,.nsm7Bb-HzV7m-LgbsSe:focus .nsm7Bb-HzV7m-LgbsSe-MJoBVe{background:rgba(66,133,244,.1)}.nsm7Bb-HzV7m-LgbsSe.i5vt6e-to915-Ia7Qfc:hover .nsm7Bb-HzV7m-LgbsSe-MJoBVe{background:rgba(255,255,255,.08)}.nsm7Bb-HzV7m-LgbsSe.i5vt6e-to915-Ia7Qfc:active .nsm7Bb-HzV7m-LgbsSe-MJoBVe,.nsm7Bb-HzV7m-LgbsSe.i5vt6e-to915-Ia7Qfc:focus .nsm7Bb-HzV7m-LgbsSe-MJoBVe{background:rgba(255,255,255,.12)}.nsm7Bb-HzV7m-LgbsSe.MFS4be-Ia7Qfc:hover .nsm7Bb-HzV7m-LgbsSe-MJoBVe{background:rgba(255,255,255,.24)}.nsm7Bb-HzV7m-LgbsSe.MFS4be-Ia7Qfc:active .nsm7Bb-HzV7m-LgbsSe-MJoBVe,.nsm7Bb-HzV7m-LgbsSe.MFS4be-Ia7Qfc:focus .nsm7Bb-HzV7m-LgbsSe-MJoBVe{background:rgba(255,255,255,.32)}.nsm7Bb-HzV7m-LgbsSe .n1UuX-DkfjY{border-radius:50%;display:-webkit-box;display:-webkit-flex;display:flex;height:20px;margin-left:-4px;margin-right:8px;min-width:20px;width:20px}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-BPrWId{font-family:Roboto;font-size:12px;text-align:left}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-BPrWId .K4efff .fmcmS,.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-BPrWId .ssJRIf{overflow:hidden;text-overflow:ellipsis}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-BPrWId .K4efff{display:-webkit-box;display:-webkit-flex;display:flex;-webkit-align-items:center;-webkit-box-align:center;align-items:center;color:#5f6368;fill:#5f6368;font-size:11px;font-weight:400}.nsm7Bb-HzV7m-LgbsSe.jVeSEe.i5vt6e-to915-Ia7Qfc .nsm7Bb-HzV7m-LgbsSe-BPrWId .K4efff{color:#c4c7c5;fill:#c4c7c5}.nsm7Bb-HzV7m-LgbsSe.jVeSEe.MFS4be-Ia7Qfc .nsm7Bb-HzV7m-LgbsSe-BPrWId .K4efff{color:#e8eaed;fill:#e8eaed}@media screen and (prefers-contrast:more){.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-BPrWId .K4efff,.nsm7Bb-HzV7m-LgbsSe.jVeSEe.MFS4be-Ia7Qfc .nsm7Bb-HzV7m-LgbsSe-BPrWId .K4efff{color:#000;fill:#000}}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-BPrWId .K4efff .Bz112c{height:18px;margin:-3px -3px -3px 2px;min-width:18px;width:18px}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{border-top-left-radius:0;border-bottom-left-radius:0;border-top-right-radius:3px;border-bottom-right-radius:3px;margin-left:12px;margin-right:-10px}.nsm7Bb-HzV7m-LgbsSe.jVeSEe.JGcpL-RbRzK .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{border-radius:18px}.L5Fo6c-sM5MNb{border:0;display:block;left:0;position:relative;top:0}.L5Fo6c-bF1uUb{border-radius:4px;bottom:0;cursor:pointer;left:0;position:absolute;right:0;top:0}.L5Fo6c-bF1uUb:focus{border:none;outline:none}sentinel{}</style><style type="text/css">.alert-box p { font-size: 16px; }</style><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/CodeChefIDE-bvM8m8Qv.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/Hints-CaKZNyKn.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/server.browser-D-RBFX2n.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/MarkdownPreviewLite-CvuIE_aR.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/index-xK9p6Kn2.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/vendor-react-markdown-DZ-fy4il.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/vendor-katex--NZxydnM.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/vendor-prismjs-YHDdZf5t.js"><link rel="stylesheet" crossorigin="" href="./KMP_files/MarkdownPreviewLite-BN6Z5l65.css"><link rel="stylesheet" crossorigin="" href="./KMP_files/katex-DSyo5k8n.css"><link rel="stylesheet" crossorigin="" href="./KMP_files/prism-vs-dark-B-GUGs9_.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/CodeVisualizer-5_hJsrFZ.js"><link rel="stylesheet" crossorigin="" href="./KMP_files/CodeVisualizer-7Anurih9.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/FeatureToolTip-B7PqTZaV.js"><link rel="stylesheet" crossorigin="" href="./KMP_files/FeatureToolTip-VveDvckU.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/index.es-Bl1M-TlP.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/LearningContest-BZskArab.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/Constant-ChAz5tWE.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/vendor-ace-CwHVNqeR.js"><link rel="stylesheet" crossorigin="" href="./KMP_files/LearningContest-Ccs8n7Rr.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/Badges-hGjZZpxW.js"><link rel="stylesheet" crossorigin="" href="./KMP_files/Badges-BtA0P8JH.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/MySubmissions-WYifm21p.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/TablePagination-BL8ciw4X.js"><link rel="stylesheet" crossorigin="" href="./KMP_files/TablePagination-CLYgiw_w.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/PremiumBanners-Bu1sCIip.js"><link rel="stylesheet" crossorigin="" href="./KMP_files/PremiumBanners-BbLQiGaF.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/DataGrid-BwsU3Opn.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/vendor-mui-datatables-5aDd3uxO.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/index.es-CLmToPHp.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/UserStar-CchJMz05.js"><link rel="stylesheet" crossorigin="" href="./KMP_files/UserStar-DVebVVJp.css"><link rel="stylesheet" crossorigin="" href="./KMP_files/MySubmissions-DN-wAxrh.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/SubmitResult-OIyry3c1.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/Constants-BB6JJMyq.js"><link rel="stylesheet" crossorigin="" href="./KMP_files/SubmitResult-Bq1dwiFl.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/HorizontalTabPanel-DrTGpFsZ.js"><link rel="stylesheet" crossorigin="" href="./KMP_files/HorizontalTabPanel-D4piIELt.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/BreadCrumbs-Ow_MA5zm.js"><link rel="stylesheet" crossorigin="" href="./KMP_files/BreadCrumbs-9soXbGl9.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/InputFields-Cc7HTI1T.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/CheckBox-DCCI_PJU.js"><link rel="stylesheet" crossorigin="" href="./KMP_files/CheckBox-sUUsLIgT.css"><link rel="stylesheet" crossorigin="" href="./KMP_files/InputFields-pCVQAfih.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/SelectDropdown-COzQixQ3.js"><link rel="stylesheet" crossorigin="" href="./KMP_files/SelectDropdown-DO-u6-Ti.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/FeedbackComponent-Cv-bvthk.js"><link rel="stylesheet" crossorigin="" href="./KMP_files/FeedbackComponent-ClgYIttc.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/index-DQSVkXeY.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/MobileHorizontalTab-BQtTwSXl.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/Bookmark-YNtr7pIo.js"><link rel="stylesheet" crossorigin="" href="./KMP_files/Bookmark-CG3kOXzE.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/TopBanner.module--qQpYJq9.js"><link rel="stylesheet" crossorigin="" href="./KMP_files/TopBanner-CKeyNyjs.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/ProblemSolution-C6O6A5V7.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/VideoPlayer-CR5DGQmu.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/ProblemSolution.module-B8G4Vgx3.js"><link rel="stylesheet" crossorigin="" href="./KMP_files/ProblemSolution-Bxg2lSIZ.css"><link rel="stylesheet" crossorigin="" href="./KMP_files/ProblemSolution-DNsXnEDg.css"><link rel="stylesheet" crossorigin="" href="./KMP_files/Hints-B4iktF-7.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/HTMLEditor-8ygs3LsC.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/Constants-FwpD2CII.js"><link rel="stylesheet" crossorigin="" href="./KMP_files/HTMLEditor-C2JsiOJp.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/HTMLOutput-B6kj9hBw.js"><link rel="stylesheet" crossorigin="" href="./KMP_files/HTMLOutput-CyZUCGyw.css"><link rel="stylesheet" crossorigin="" href="./KMP_files/CodeChefIDE-iP7J-ENi.css"><script src="./KMP_files/mode-plain_text.js.download"></script><script src="./KMP_files/theme-tomorrow_night.js.download"></script><script src="./KMP_files/python.js.download"></script><script type="text/javascript" async="" src="./KMP_files/f.txt"></script><script src="./KMP_files/mode-c_cpp.js.download"></script><script src="./KMP_files/c_cpp.js.download"></script></head>

<body style="background-color: rgb(29, 30, 35);">
  <noscript>You need to enable JavaScript to run this app.</noscript>
  
  <div id="root"><div style="background: rgb(29, 30, 35);"><div aria-hidden="true" class="MuiBackdrop-root _backdrop_pm713_1 undefined css-11m57ox" style="opacity: 0; visibility: hidden;"><span class="MuiLinearProgress-root MuiLinearProgress-colorPrimary MuiLinearProgress-indeterminate _progress_pm713_7 css-1bkwg0l" role="progressbar"><span class="MuiLinearProgress-bar MuiLinearProgress-bar1 MuiLinearProgress-barColorPrimary MuiLinearProgress-bar1Indeterminate css-y6kna5"></span><span class="MuiLinearProgress-bar MuiLinearProgress-bar2 MuiLinearProgress-barColorPrimary MuiLinearProgress-bar2Indeterminate css-mddmmv"></span></span></div><header class="_m-header-one_phs6a_640 _dark_phs6a_60"><div class="_l-header_phs6a_653"><div class="_l-header__logo_phs6a_692"><div id="headerLogo" class="_l-header__image-2_phs6a_697"><a href="https://www.codechef.com/"><img class="_m-header__image_phs6a_707 _m-header__image--pc_phs6a_711" src="./KMP_files/cc-logo.svg" alt="CodeChef Logo" width="150" height="50"><img class="_m-header__image_phs6a_707 _m-header__image--mobile_phs6a_719" src="./KMP_files/cc-logo-mobile.svg" alt="CodeChef Logo" width="52" height="52"></a></div><div class="_desktopNavigation_14jtp_30 _dark_14jtp_59"><div class="_headerNavigation_14jtp_30"><div class="_navigationRow_14jtp_34"><div class="_dropdownNavigationItem_14jtp_39" role="button" tabindex="0"><span class="_navigationLink_14jtp_53 _dark_14jtp_59">Courses</span><div class="_usernameDropdownContainer_14jtp_3"><i class="_i-dropdown-down_14jtp_620 _dark_14jtp_59"></i></div><div class="_courseDropdown_14jtp_200 _dark_14jtp_59 _is-closed_14jtp_608"><div class="_topLayout_14jtp_230 _dark_14jtp_59"><div class="_leftColumn_14jtp_246"><div class="_categoryItem_14jtp_264  _dark_14jtp_59 _activeCategory_14jtp_275"><h3 class="_categoryTitle_14jtp_286 _dark_14jtp_59">Programming and DSA</h3><p class="_categoryDescription_14jtp_297 _dark_14jtp_59">Learn to think like a programmer. Develop your problem-solving skills with essential data structures and algorithms.</p></div><div class="_categoryItem_14jtp_264  _dark_14jtp_59 "><h3 class="_categoryTitle_14jtp_286 _dark_14jtp_59">Career Paths</h3><p class="_categoryDescription_14jtp_297 _dark_14jtp_59">From beginner to job-ready. Explore our curated career paths designed to help you succeed in the tech industry.</p></div><div class="_categoryItem_14jtp_264  _dark_14jtp_59 "><h3 class="_categoryTitle_14jtp_286 _dark_14jtp_59">Other Courses</h3></div></div><div class="_rightColumn_14jtp_421"><h2 class="_categoryHeader_14jtp_431 _dark_14jtp_59">Programming and DSA</h2><a class="_courseListContainer_14jtp_453 _dark_14jtp_59" href="https://www.codechef.com/roadmap/python-dsa"><div class="_courseList_14jtp_453 _dark_14jtp_59"><span class="_topics_14jtp_480 _dark_14jtp_59">Learn Python</span><span class="_coursesCount_14jtp_488 _dark_14jtp_59">460k learners</span></div></a><a class="_courseListContainer_14jtp_453 _dark_14jtp_59" href="https://www.codechef.com/roadmap/cpp-dsa"><div class="_courseList_14jtp_453 _dark_14jtp_59"><span class="_topics_14jtp_480 _dark_14jtp_59">Learn C++</span><span class="_coursesCount_14jtp_488 _dark_14jtp_59">285k learners</span></div></a><a class="_courseListContainer_14jtp_453 _dark_14jtp_59" href="https://www.codechef.com/roadmap/c-dsa"><div class="_courseList_14jtp_453 _dark_14jtp_59"><span class="_topics_14jtp_480 _dark_14jtp_59">Learn C</span><span class="_coursesCount_14jtp_488 _dark_14jtp_59">306k learners</span></div></a><a class="_courseListContainer_14jtp_453 _dark_14jtp_59" href="https://www.codechef.com/roadmap/java-dsa"><div class="_courseList_14jtp_453 _dark_14jtp_59"><span class="_topics_14jtp_480 _dark_14jtp_59">Learn Java</span><span class="_coursesCount_14jtp_488 _dark_14jtp_59">365.6k learners</span></div></a><a class="_courseListContainer_14jtp_453 _dark_14jtp_59" href="https://www.codechef.com/roadmap/javascript-dsa"><div class="_courseList_14jtp_453 _dark_14jtp_59"><span class="_topics_14jtp_480 _dark_14jtp_59">Learn JavaScript</span><span class="_coursesCount_14jtp_488 _dark_14jtp_59">196k learners</span></div></a><a class="_courseListContainer_14jtp_453 _dark_14jtp_59" href="https://www.codechef.com/roadmap/data-structures-and-algorithms"><div class="_courseList_14jtp_453 _dark_14jtp_59"><span class="_topics_14jtp_480 _dark_14jtp_59">Data Structures &amp; Algorithms</span><span class="_coursesCount_14jtp_488 _dark_14jtp_59">80k learners</span></div></a><a class="_courseListContainer_14jtp_453 _dark_14jtp_59" href="https://www.codechef.com/roadmap/become-5-star"><div class="_courseList_14jtp_453 _dark_14jtp_59"><span class="_topics_14jtp_480 _dark_14jtp_59">Competitive Programming</span><span class="_coursesCount_14jtp_488 _dark_14jtp_59">100.8k learners</span></div></a></div></div><div class="_bottomLayout_14jtp_372"><a class="_completeCourseCta_14jtp_331 _dark_14jtp_59" href="https://www.codechef.com/learn#header">Explore courses<span class="_externalLink__iconContainer_14jtp_344"><i class="_externalLink__rightIcon_14jtp_363"></i></span></a></div></div></div><a class="_navigationItem_14jtp_74" href="https://www.codechef.com/practice"><span class="_navigationLink_14jtp_53 _dark_14jtp_59 ">Practice</span></a><a class="_navigationItem_14jtp_74" href="https://www.codechef.com/contests"><span class="_navigationLink_14jtp_53 _dark_14jtp_59 ">Compete</span></a><a class="_navigationItem_14jtp_74" href="https://www.codechef.com/ide"><span class="_navigationLink_14jtp_53 _dark_14jtp_59 ">Compiler</span></a></div></div></div></div><div class="_headerRightContainer_phs6a_734"><div class="_l-header__user-block_phs6a_946"><div class="_l-header__user-block_phs6a_946"><div style="display: flex; align-items: center;"><a class="_m-premium-text-container_phs6a_951 _dark_phs6a_60" href="https://www.codechef.com/pro#header" style="text-decoration: none;"><i class="_i-premium-icon_phs6a_1098"></i><span class="_m-premium-text_phs6a_951">Upgrade to Pro</span></a><hr class="_m-divider--vertical_phs6a_795"><div class="_m-login-container--desktop_phs6a_810"><button type="button" class="_m-login-button-no-border_phs6a_818 _m-login-button_phs6a_818 _dark_phs6a_60">Login</button><button type="button" class="_m-signup-button_phs6a_826 _dark_phs6a_60">Sign Up</button></div><div class="_m-login-container--mobile_phs6a_884"><button type="button" class="_m-login-button_phs6a_818">Login / Sign up</button></div></div></div></div></div></div></header><div class="_mobileNavigation_14jtp_30 _dark_14jtp_59"><div class="_headerNavigation_14jtp_30"><div class="_navigationRow_14jtp_34"><div class="_dropdownNavigationItem_14jtp_39" role="button" tabindex="0"><span class="_navigationLink_14jtp_53 _dark_14jtp_59">Courses</span><div class="_usernameDropdownContainer_14jtp_3"><i class="_i-dropdown-down_14jtp_620 _dark_14jtp_59"></i></div><div class="_courseDropdown_14jtp_200 _dark_14jtp_59 _is-closed_14jtp_608"><div class="_topLayout_14jtp_230 _dark_14jtp_59"><div class="_leftColumn_14jtp_246"><div class="_categoryItem_14jtp_264  _dark_14jtp_59 _activeCategory_14jtp_275"><h3 class="_categoryTitle_14jtp_286 _dark_14jtp_59">Programming and DSA</h3><p class="_categoryDescription_14jtp_297 _dark_14jtp_59">Learn to think like a programmer. Develop your problem-solving skills with essential data structures and algorithms.</p></div><div class="_categoryItem_14jtp_264  _dark_14jtp_59 "><h3 class="_categoryTitle_14jtp_286 _dark_14jtp_59">Career Paths</h3><p class="_categoryDescription_14jtp_297 _dark_14jtp_59">From beginner to job-ready. Explore our curated career paths designed to help you succeed in the tech industry.</p></div><div class="_categoryItem_14jtp_264  _dark_14jtp_59 "><h3 class="_categoryTitle_14jtp_286 _dark_14jtp_59">Other Courses</h3></div></div><div class="_rightColumn_14jtp_421"><h2 class="_categoryHeader_14jtp_431 _dark_14jtp_59">Programming and DSA</h2><a class="_courseListContainer_14jtp_453 _dark_14jtp_59" href="https://www.codechef.com/roadmap/python-dsa"><div class="_courseList_14jtp_453 _dark_14jtp_59"><span class="_topics_14jtp_480 _dark_14jtp_59">Learn Python</span><span class="_coursesCount_14jtp_488 _dark_14jtp_59">460k learners</span></div></a><a class="_courseListContainer_14jtp_453 _dark_14jtp_59" href="https://www.codechef.com/roadmap/cpp-dsa"><div class="_courseList_14jtp_453 _dark_14jtp_59"><span class="_topics_14jtp_480 _dark_14jtp_59">Learn C++</span><span class="_coursesCount_14jtp_488 _dark_14jtp_59">285k learners</span></div></a><a class="_courseListContainer_14jtp_453 _dark_14jtp_59" href="https://www.codechef.com/roadmap/c-dsa"><div class="_courseList_14jtp_453 _dark_14jtp_59"><span class="_topics_14jtp_480 _dark_14jtp_59">Learn C</span><span class="_coursesCount_14jtp_488 _dark_14jtp_59">306k learners</span></div></a><a class="_courseListContainer_14jtp_453 _dark_14jtp_59" href="https://www.codechef.com/roadmap/java-dsa"><div class="_courseList_14jtp_453 _dark_14jtp_59"><span class="_topics_14jtp_480 _dark_14jtp_59">Learn Java</span><span class="_coursesCount_14jtp_488 _dark_14jtp_59">365.6k learners</span></div></a><a class="_courseListContainer_14jtp_453 _dark_14jtp_59" href="https://www.codechef.com/roadmap/javascript-dsa"><div class="_courseList_14jtp_453 _dark_14jtp_59"><span class="_topics_14jtp_480 _dark_14jtp_59">Learn JavaScript</span><span class="_coursesCount_14jtp_488 _dark_14jtp_59">196k learners</span></div></a><a class="_courseListContainer_14jtp_453 _dark_14jtp_59" href="https://www.codechef.com/roadmap/data-structures-and-algorithms"><div class="_courseList_14jtp_453 _dark_14jtp_59"><span class="_topics_14jtp_480 _dark_14jtp_59">Data Structures &amp; Algorithms</span><span class="_coursesCount_14jtp_488 _dark_14jtp_59">80k learners</span></div></a><a class="_courseListContainer_14jtp_453 _dark_14jtp_59" href="https://www.codechef.com/roadmap/become-5-star"><div class="_courseList_14jtp_453 _dark_14jtp_59"><span class="_topics_14jtp_480 _dark_14jtp_59">Competitive Programming</span><span class="_coursesCount_14jtp_488 _dark_14jtp_59">100.8k learners</span></div></a></div></div><div class="_bottomLayout_14jtp_372"><a class="_completeCourseCta_14jtp_331 _dark_14jtp_59" href="https://www.codechef.com/learn#header">Explore courses<span class="_externalLink__iconContainer_14jtp_344"><i class="_externalLink__rightIcon_14jtp_363"></i></span></a></div></div></div><a class="_navigationItem_14jtp_74" href="https://www.codechef.com/practice"><span class="_navigationLink_14jtp_53 _dark_14jtp_59 ">Practice</span></a><a class="_navigationItem_14jtp_74" href="https://www.codechef.com/contests"><span class="_navigationLink_14jtp_53 _dark_14jtp_59 ">Compete</span></a><a class="_navigationItem_14jtp_74" href="https://www.codechef.com/ide"><span class="_navigationLink_14jtp_53 _dark_14jtp_59 ">Compiler</span></a></div></div></div><div class="_pageContainer_1se0b_3 _dark_1se0b_9" style="max-width: 100%;"><div style="display: block;"><div class="_ideContainer_a1o4l_2"><div class="_ideHeader_a1o4l_7"><h1 class="_compilerTextLabel_a1o4l_15">Online C++ Compiler and Visualizer</h1><div><a href="https://www.codechef.com/roadmap/cpp-dsa" rel="noopener noreferrer" target="_blank" class="_adWidgetContent_bt966_1">Learning C++? Check out our complete C++ roadmap<div class="_arrowIcon_bt966_14"><svg class="MuiSvgIcon-root MuiSvgIcon-fontSizeMedium _arrow_bt966_14 css-q7mezt" focusable="false" aria-hidden="true" viewBox="0 0 24 24" data-testid="CallMadeIcon"><path d="M9 5v2h6.59L4 18.59 5.41 20 17 8.41V15h2V5z"></path></svg></div></a></div></div><div class="_ideSplitContainer_a1o4l_26"><div class="_ideSplit_a1o4l_26"><div class="_ideLeftPanel_a1o4l_37 " style="width: calc(50% - 3px);"><div><div class="_ideHeader_1pb9c_14 _dark_1pb9c_55  _codechefIDEHeader_1pb9c_2 "><div><div class="MuiFormControl-root css-1qk38wv" style="width: 156px;"><div class="MuiInputBase-root MuiOutlinedInput-root MuiInputBase-colorPrimary MuiInputBase-formControl _language__select_1pb9c_35 _dark_1pb9c_55 _codechefIDELanguageSelect_1pb9c_66 _dark_1pb9c_55 MuiSelect-root css-98ra8i"><div tabindex="0" role="combobox" aria-expanded="false" aria-haspopup="listbox" aria-labelledby="language-select" id="language-select" class="MuiSelect-select MuiSelect-outlined MuiInputBase-input MuiOutlinedInput-input css-mp9f0v">C++</div><input aria-invalid="false" aria-hidden="true" tabindex="-1" class="MuiSelect-nativeInput css-147e5lo" value="C++"><svg class="MuiSvgIcon-root MuiSvgIcon-fontSizeMedium MuiSelect-icon MuiSelect-iconOutlined css-1l3b12y" focusable="false" aria-hidden="true" viewBox="0 0 24 24" data-testid="ArrowDropDownIcon"><path d="M7 10l5 5 5-5z"></path></svg><fieldset aria-hidden="true" class="MuiOutlinedInput-notchedOutline css-5v2ak0"><legend class="css-w4cd9x"><span class="notranslate" aria-hidden="true">​</span></legend></fieldset></div></div></div><ul class="_settings_1fs8l_2 _dark_1fs8l_71"><li><div class="css-1eiukdk _icon__container_1fs8l_16" aria-label="Format code"><i class="_beautify__icon_1fs8l_29"></i></div></li><li><div class="css-1eiukdk _icon__container_1fs8l_16" aria-label="Download code"><i class="_download__icon_1fs8l_35"></i></div></li><li><div class="css-1eiukdk _icon__container_1fs8l_16" aria-label="Reset code"><i class="_reset__icon_1fs8l_41"></i></div></li><li><div class="css-1eiukdk _icon__container_1fs8l_16" aria-label="Settings"><i class="_settings__icon_1fs8l_53"></i></div></li></ul></div><div class="_ideEditorWrapper_1pb9c_175 _dark_1pb9c_55  _codechefIDEEditorWrapper_1pb9c_211" style="height: calc(-290px + 100vh);"><div aria-hidden="true" class="MuiBackdrop-root _ide-overlay__backdrop_1pb9c_190 css-11m57ox" style="opacity: 0; transition: opacity 195ms cubic-bezier(0.4, 0, 0.2, 1); visibility: hidden;"></div><div id="submit-ide-v2" class=" ace_editor _ide__editor_1pb9c_218 ace-tomorrow-night ace_dark" style="width: 500px; height: 100%; font-size: 14px;"><textarea class="ace_text-input" wrap="off" autocorrect="off" autocapitalize="off" spellcheck="false" aria-haspopup="true" aria-autocomplete="list" role="textbox" aria-label="Cursor at row 90" style="opacity: 0; font-size: 1px; height: 1px; width: 1px; top: 0px; left: 0px;" aria-activedescendant="suggest-aria-id:0"></textarea><div class="ace_gutter" aria-hidden="true" style="left: 0px; width: 57px;"><div class="ace_layer ace_gutter-layer ace_folding-enabled" style="height: 1e+06px; top: 16px; left: 0px; width: 57px;"><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 0px;">1<span tabindex="0" style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 17px;">2<span tabindex="0" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code" style="display: none; height: 17px;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 34px;">3<span class="ace_fold-widget ace_start ace_open" tabindex="0" aria-expanded="true" title="Fold code" style="height: 17px; display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 51px;">4<span tabindex="0" style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 68px;">5<span tabindex="0" style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 85px;">6<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 102px;">7<span tabindex="0" style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="false" style="height: 17px; top: 119px;">8<span tabindex="-1" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code" style="display: inline-block; height: 17px;" role="button" aria-label="Toggle code folding, rows 8 through 34"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 136px;">9<span tabindex="0" style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 153px;">10<span tabindex="0" style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 170px;">11<span tabindex="0" style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 187px;">12<span tabindex="0" style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 204px;">13<span tabindex="0" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code" style="display: none; height: 17px;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 221px;">14<span tabindex="0" style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 238px;">15<span tabindex="0" style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 255px;">16<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="false" style="height: 17px; top: 272px;">17<span tabindex="-1" style="display: inline-block; height: 17px;" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code" role="button" aria-label="Toggle code folding, rows 17 through 33"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 289px;">18<span tabindex="0" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code" style="display: none; height: 17px;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="false" style="height: 17px; top: 306px;">19<span tabindex="-1" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code" style="display: inline-block; height: 17px;" role="button" aria-label="Toggle code folding, rows 19 through 23"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 323px;">20<span tabindex="0" style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 340px;">21<span tabindex="0" style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 357px;">22<span tabindex="0" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code" style="display: none; height: 17px;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 374px;">23<span tabindex="0" style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 391px;">24<span tabindex="0" style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="false" style="height: 17px; top: 408px;">25<span class="ace_fold-widget ace_start ace_open" tabindex="-1" aria-expanded="true" title="Fold code" style="height: 17px; display: inline-block;" role="button" aria-label="Toggle code folding, rows 25 through 27"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 425px;">26<span tabindex="0" style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 442px;">27<span tabindex="0" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code" style="display: none; height: 17px;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 459px;">28<span class="ace_fold-widget ace_start ace_open" tabindex="0" aria-expanded="true" title="Fold code" style="height: 17px; display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="false" style="height: 17px; top: 476px;">29<span tabindex="-1" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code" style="display: inline-block; height: 17px;" role="button" aria-label="Toggle code folding, rows 29 through 32"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 493px;">30<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 510px;">31<span tabindex="0" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code" style="display: none; height: 17px;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 527px;">32<span tabindex="0" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code" style="display: none; height: 17px;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 544px;">33<span tabindex="0" style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 561px;">34<span tabindex="0" style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 578px;">35<span tabindex="0" style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 595px;">36<span tabindex="0" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code" style="display: none; height: 17px;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 612px;">37<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="false" style="height: 17px; top: 629px;">38<span tabindex="-1" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code" style="display: inline-block; height: 17px;" role="button" aria-label="Toggle code folding, rows 38 through 78"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 646px;">39<span tabindex="0" style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 663px;">40<span tabindex="0" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code" style="display: none; height: 17px;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 680px;">41<span tabindex="0" style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 697px;">42<span tabindex="0" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code" style="display: none; height: 17px;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 714px;">43<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 731px;">44<span tabindex="0" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code" style="display: none; height: 17px;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 748px;">45<span class="ace_fold-widget ace_start ace_open" tabindex="0" aria-expanded="true" title="Fold code" style="height: 17px; display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 765px;">46<span tabindex="0" style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code"></span><span tabindex="0" style="display: none;"><span></span></span></div></div></div><div class="ace_scroller " style="line-height: 17px; left: 56.0918px; right: 15px; bottom: 0px;"><div class="ace_content" style="top: 16px; left: 0px; width: 674.908px; height: 792px;"><div class="ace_layer ace_print-margin-layer"><div class="ace_print-margin" style="left: 620px; visibility: hidden;"></div></div><div class="ace_layer ace_marker-layer"></div><div class="ace_layer ace_text-layer" style="height: 1e+06px; margin: 0px 4px; top: 0px; left: 0px;"><div class="ace_line_group" style="height: 17px; top: 0px;"><div class="ace_line" style="height: 17px;"></div></div><div class="ace_line_group" style="height: 17px; top: 17px;"><div class="ace_line" style="height: 17px;"><span class="ace_keyword">#include</span><span class="ace_constant ace_other"> &lt;iostream&gt;</span></div></div><div class="ace_line_group" style="height: 17px; top: 34px;"><div class="ace_line" style="height: 17px;"><span class="ace_keyword">#include</span><span class="ace_constant ace_other"> &lt;string&gt;</span></div></div><div class="ace_line_group" style="height: 17px; top: 51px;"><div class="ace_line" style="height: 17px;"><span class="ace_keyword ace_control">using</span> <span class="ace_keyword ace_operator">namespace</span> <span class="ace_identifier">std</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height: 17px; top: 68px;"><div class="ace_line" style="height: 17px;"></div></div><div class="ace_line_group" style="height: 17px; top: 85px;"><div class="ace_line" style="height: 17px;"><span class="ace_comment">// KMP Failure Function</span></div></div><div class="ace_line_group" style="height: 17px; top: 102px;"><div class="ace_line" style="height: 17px;"><span class="ace_storage ace_type">void</span> <span class="ace_identifier">KMPFailureFunction</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">string</span> <span class="ace_identifier">P</span><span class="ace_punctuation ace_operator">,</span> <span class="ace_storage ace_type">int</span> <span class="ace_identifier">f</span><span class="ace_paren ace_lparen">[</span><span class="ace_paren ace_rparen">])</span></div></div><div class="ace_line_group" style="height: 17px; top: 119px;"><div class="ace_line" style="height: 17px;"><span class="ace_paren ace_lparen">{</span></div></div><div class="ace_line_group" style="height: 17px; top: 136px;"><div class="ace_line" style="height: 17px;">    <span class="ace_storage ace_type">int</span> <span class="ace_identifier">m</span> <span class="ace_keyword ace_operator">=</span> <span class="ace_identifier">P</span><span class="ace_punctuation ace_operator">.</span><span class="ace_identifier">length</span><span class="ace_paren ace_lparen">(</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height: 17px; top: 153px;"><div class="ace_line" style="height: 17px;"></div></div><div class="ace_line_group" style="height: 17px; top: 170px;"><div class="ace_line" style="height: 17px;">    <span class="ace_storage ace_type">int</span> <span class="ace_identifier">i</span> <span class="ace_keyword ace_operator">=</span> <span class="ace_constant ace_numeric">1</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height: 17px; top: 187px;"><div class="ace_line" style="height: 17px;">    <span class="ace_storage ace_type">int</span> <span class="ace_identifier">j</span> <span class="ace_keyword ace_operator">=</span> <span class="ace_constant ace_numeric">0</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height: 17px; top: 204px;"><div class="ace_line" style="height: 17px;"></div></div><div class="ace_line_group" style="height: 17px; top: 221px;"><div class="ace_line" style="height: 17px;">    <span class="ace_identifier">f</span><span class="ace_paren ace_lparen">[</span><span class="ace_constant ace_numeric">0</span><span class="ace_paren ace_rparen">]</span> <span class="ace_keyword ace_operator">=</span> <span class="ace_constant ace_numeric">0</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height: 17px; top: 238px;"><div class="ace_line" style="height: 17px;"></div></div><div class="ace_line_group" style="height: 17px; top: 255px;"><div class="ace_line" style="height: 17px;">    <span class="ace_keyword ace_control">while</span> <span class="ace_paren ace_lparen">(</span><span class="ace_identifier">i</span> <span class="ace_keyword ace_operator">&lt;</span> <span class="ace_identifier">m</span><span class="ace_paren ace_rparen">)</span></div></div><div class="ace_line_group" style="height: 17px; top: 272px;"><div class="ace_line" style="height: 17px;">    <span class="ace_paren ace_lparen">{</span></div></div><div class="ace_line_group" style="height: 17px; top: 289px;"><div class="ace_line" style="height: 17px;"><span class="ace_indent-guide">    </span>    <span class="ace_keyword ace_control">if</span> <span class="ace_paren ace_lparen">(</span><span class="ace_identifier">P</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">j</span><span class="ace_paren ace_rparen">]</span> <span class="ace_keyword ace_operator">==</span> <span class="ace_identifier">P</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">i</span><span class="ace_paren ace_rparen">])</span></div></div><div class="ace_line_group" style="height: 17px; top: 306px;"><div class="ace_line" style="height: 17px;"><span class="ace_indent-guide">    </span>    <span class="ace_paren ace_lparen">{</span></div></div><div class="ace_line_group" style="height: 17px; top: 323px;"><div class="ace_line" style="height: 17px;"><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span>    <span class="ace_identifier">f</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">i</span><span class="ace_paren ace_rparen">]</span> <span class="ace_keyword ace_operator">=</span> <span class="ace_identifier">j</span> <span class="ace_keyword ace_operator">+</span> <span class="ace_constant ace_numeric">1</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height: 17px; top: 340px;"><div class="ace_line" style="height: 17px;"><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span>    <span class="ace_identifier">i</span><span class="ace_keyword ace_operator">++</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height: 17px; top: 357px;"><div class="ace_line" style="height: 17px;"><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span>    <span class="ace_identifier">j</span><span class="ace_keyword ace_operator">++</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height: 17px; top: 374px;"><div class="ace_line" style="height: 17px;"><span class="ace_indent-guide">    </span>    <span class="ace_paren ace_rparen">}</span></div></div><div class="ace_line_group" style="height: 17px; top: 391px;"><div class="ace_line" style="height: 17px;"><span class="ace_indent-guide">    </span>    <span class="ace_keyword ace_control">else</span> <span class="ace_keyword ace_control">if</span> <span class="ace_paren ace_lparen">(</span><span class="ace_identifier">j</span> <span class="ace_keyword ace_operator">&gt;</span> <span class="ace_constant ace_numeric">0</span><span class="ace_paren ace_rparen">)</span></div></div><div class="ace_line_group" style="height: 17px; top: 408px;"><div class="ace_line" style="height: 17px;"><span class="ace_indent-guide">    </span>    <span class="ace_paren ace_lparen">{</span></div></div><div class="ace_line_group" style="height: 17px; top: 425px;"><div class="ace_line" style="height: 17px;"><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span>    <span class="ace_identifier">j</span> <span class="ace_keyword ace_operator">=</span> <span class="ace_identifier">f</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">j</span> <span class="ace_keyword ace_operator">-</span> <span class="ace_constant ace_numeric">1</span><span class="ace_paren ace_rparen">]</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height: 17px; top: 442px;"><div class="ace_line" style="height: 17px;"><span class="ace_indent-guide">    </span>    <span class="ace_paren ace_rparen">}</span></div></div><div class="ace_line_group" style="height: 17px; top: 459px;"><div class="ace_line" style="height: 17px;"><span class="ace_indent-guide">    </span>    <span class="ace_keyword ace_control">else</span></div></div><div class="ace_line_group" style="height: 17px; top: 476px;"><div class="ace_line" style="height: 17px;"><span class="ace_indent-guide">    </span>    <span class="ace_paren ace_lparen">{</span></div></div><div class="ace_line_group" style="height: 17px; top: 493px;"><div class="ace_line" style="height: 17px;"><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span>    <span class="ace_identifier">f</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">i</span><span class="ace_paren ace_rparen">]</span> <span class="ace_keyword ace_operator">=</span> <span class="ace_constant ace_numeric">0</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height: 17px; top: 510px;"><div class="ace_line" style="height: 17px;"><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span>    <span class="ace_identifier">i</span><span class="ace_keyword ace_operator">++</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height: 17px; top: 527px;"><div class="ace_line" style="height: 17px;"><span class="ace_indent-guide">    </span>    <span class="ace_paren ace_rparen">}</span></div></div><div class="ace_line_group" style="height: 17px; top: 544px;"><div class="ace_line" style="height: 17px;">    <span class="ace_paren ace_rparen">}</span></div></div><div class="ace_line_group" style="height: 17px; top: 561px;"><div class="ace_line" style="height: 17px;"><span class="ace_paren ace_rparen">}</span></div></div><div class="ace_line_group" style="height: 17px; top: 578px;"><div class="ace_line" style="height: 17px;"></div></div><div class="ace_line_group" style="height: 17px; top: 595px;"><div class="ace_line" style="height: 17px;"><span class="ace_comment">// KMP Search Function</span></div></div><div class="ace_line_group" style="height: 17px; top: 612px;"><div class="ace_line" style="height: 17px;"><span class="ace_storage ace_type">void</span> <span class="ace_identifier">KMP_Search</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">string</span> <span class="ace_identifier">T</span><span class="ace_punctuation ace_operator">,</span> <span class="ace_identifier">string</span> <span class="ace_identifier">P</span><span class="ace_paren ace_rparen">)</span></div></div><div class="ace_line_group" style="height: 17px; top: 629px;"><div class="ace_line" style="height: 17px;"><span class="ace_paren ace_lparen">{</span></div></div><div class="ace_line_group" style="height: 17px; top: 646px;"><div class="ace_line" style="height: 17px;">    <span class="ace_storage ace_type">int</span> <span class="ace_identifier">n</span> <span class="ace_keyword ace_operator">=</span> <span class="ace_identifier">T</span><span class="ace_punctuation ace_operator">.</span><span class="ace_identifier">length</span><span class="ace_paren ace_lparen">(</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height: 17px; top: 663px;"><div class="ace_line" style="height: 17px;">    <span class="ace_storage ace_type">int</span> <span class="ace_identifier">m</span> <span class="ace_keyword ace_operator">=</span> <span class="ace_identifier">P</span><span class="ace_punctuation ace_operator">.</span><span class="ace_identifier">length</span><span class="ace_paren ace_lparen">(</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height: 17px; top: 680px;"><div class="ace_line" style="height: 17px;"></div></div><div class="ace_line_group" style="height: 17px; top: 697px;"><div class="ace_line" style="height: 17px;">    <span class="ace_storage ace_type">int</span> <span class="ace_keyword ace_operator">*</span><span class="ace_identifier">f</span> <span class="ace_keyword ace_operator">=</span> <span class="ace_storage ace_modifier">new</span> <span class="ace_storage ace_type">int</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">m</span><span class="ace_paren ace_rparen">]</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height: 17px; top: 714px;"><div class="ace_line" style="height: 17px;"></div></div><div class="ace_line_group" style="height: 17px; top: 731px;"><div class="ace_line" style="height: 17px;">    <span class="ace_identifier">KMPFailureFunction</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">P</span><span class="ace_punctuation ace_operator">,</span> <span class="ace_identifier">f</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height: 17px; top: 748px;"><div class="ace_line" style="height: 17px;"></div></div><div class="ace_line_group" style="height: 17px; top: 765px;"><div class="ace_line" style="height: 17px;">    <span class="ace_storage ace_type">int</span> <span class="ace_identifier">i</span> <span class="ace_keyword ace_operator">=</span> <span class="ace_constant ace_numeric">0</span><span class="ace_punctuation ace_operator">,</span> <span class="ace_identifier">j</span> <span class="ace_keyword ace_operator">=</span> <span class="ace_constant ace_numeric">0</span><span class="ace_punctuation ace_operator">;</span></div></div></div><div class="ace_layer ace_marker-layer"></div><div class="ace_layer ace_cursor-layer ace_hidden-cursors"><div class="ace_cursor" style="display: block; top: 1513px; left: 119px; width: 8px; height: 17px; animation-duration: 1000ms;"></div></div></div></div><div class="ace_scrollbar ace_scrollbar-v" style="width: 20px; height: 758px; bottom: 0px;"><div class="ace_scrollbar-inner" style="width: 20px; height: 1766px;">&nbsp;</div></div><div class="ace_scrollbar ace_scrollbar-h" style="display: none; height: 20px; left: 56.0918px; right: 15px; width: 674.908px;"><div class="ace_scrollbar-inner" style="height: 20px; width: 682px;">&nbsp;</div></div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: hidden;"><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: visible;">הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה</div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font-style: inherit; font-variant: inherit; font-stretch: inherit; font-size: inherit; line-height: inherit; font-family: inherit; font-optical-sizing: inherit; font-size-adjust: inherit; font-kerning: inherit; font-feature-settings: inherit; font-variation-settings: inherit; font-language-override: inherit; overflow: visible;">XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX</div></div><div class="ace_tooltip" role="tooltip" style="display: none; pointer-events: auto;"></div></div></div></div></div><div class="gutter gutter-horizontal" style="background-color: rgb(38, 40, 47); width: 6px; min-width: 6px;"></div><div class="_ideRightPanel_a1o4l_47 " style="width: calc(50% - 3px);"><div class="_ideExecuteWrapperRef_yibw2_2 _dark_yibw2_12 "><div class="_ideExecuteWrapperComponents_yibw2_15 _codechefIdeExecuteWrapperComponents_yibw2_22 "><div class="_tcContainer_yibw2_454 _dark_yibw2_12"><div class="_tcInputDetails_yibw2_475"><textarea placeholder="Enter Input here" class="_textarea_yibw2_430">ababababdabababca
abca</textarea></div></div><div class="_tcOutputContainer_yibw2_532" style="height: 586px;"><div class="_tcOutput_yibw2_532"><div class="_tcOutputLabel_yibw2_547"><span>Output</span></div></div><div class="_outputContent_yibw2_535"><div class="_runTab_yibw2_566 _dark_yibw2_12"><div class="_runResult_58rxo_2 _dark_58rxo_263 _runData_58rxo_170"><div class="_status__container_58rxo_18"><div class=""><div><span class="_text_58rxo_202">Status :</span><span class="_value_58rxo_206">Successfully executed</span></div></div></div><div class="_timeMem__container_58rxo_211"><div class="_value__box_58rxo_214"><span class="_text_58rxo_202">Time:</span><span class="_value_58rxo_206">0.0000 secs</span></div><div class="_value__box_58rxo_214"><span class="_text_58rxo_202">Memory:</span><span class="_value_58rxo_206">3.648 Mb</span></div></div><div class="_output__container_58rxo_238"><div class="_output-item__head_58rxo_242">Sample Input</div><div class="_output-item__value_58rxo_247 " style="background-color: rgb(246, 249, 252);"><pre><code class="">ababababdabababca
abca</code></pre></div></div><div class="_output__container_58rxo_238"><div class="_output-item__head_58rxo_242">Your Output</div><div class="_output-item__value_58rxo_247 " style="background-color: rgb(246, 249, 252);"><pre><code class="">Enter the text: 
Enter the pattern: 
Pattern found at index: 13
</code></pre></div></div></div></div></div></div><div></div></div><div class="_runContainer_yibw2_125 _dark_yibw2_12 _codechefIDERunContainer_yibw2_385 _dark_yibw2_12 "><div class="_execute-btn-container_yibw2_215"><div class="_execute-btn-actions_yibw2_238 _codechefIdeExecuteBtnAction_yibw2_250"><button type="button" class="css-1eiukdk _ideRunBtn_yibw2_262 " id="compile_btn"><span class="_ideBtnText_yibw2_282">Run</span></button><div style="text-align: center;"><div class="_codeVisualizer_yibw2_49 _dark_yibw2_12 _codechefIdeVisualizer_yibw2_116 "><i class="_eyeIcon_yibw2_62 _dark_yibw2_12"></i><span class="_text_yibw2_94 _dark_yibw2_12 ">Visualize Code</span></div></div></div></div><div class="_leftContainer_yibw2_155"></div></div><div></div></div></div></div></div><div class="_about_12469_6"><div class="_container1_12469_14"><h1 class="_container1Title_12469_21">Online C++ Compiler</h1><div class="_container1Content_12469_30"><div>Welcome to our online C++ compiler, the perfect platform to run and test your C++ code efficiently. Our tool makes coding easy for developers of any skill level, whether you're a beginner or experienced.</div><div>Our compiler is powered by AI, which provides intelligent error explanations and code corrections. When you run your code and encounter errors, our AI assistant will explain the issue and offer corrected code that you can easily copy and paste to fix the problem, making debugging faster and more efficient.</div><div>Our compiler will allow you to<ul class="_indent_12469_2"><li>Run your code fast</li><li>Get detailed output and error description after each run</li><li>Get AI-powered error explanations and code corrections</li><li>You can also check the time and memory usage of your code</li><li>Write your code faster using the auto-complete feature</li><li>Use and import libraries</li><li>Customize the editor with your favorite theme</li><li>Read / Write and edit files like csv, text etc</li></ul></div></div></div><div class="_container2_12469_43"><div class="_container2Title_12469_50">What is an online compiler?</div><div class="_container2Content_12469_59">Online compilers are online code editors that let you run and test your code in a web browser easily. Use our code C++ editor above to write your code, and compile it.</div></div><div class="_container2_12469_43"><div class="_container2Title_12469_50">C++ Code Visualizer</div><div class="_container2Content_12469_59">Enhance your C++ programming experience with our new Code Visualizer. This tool provides real-time tracking of memory management, variables, and execution flow, making it easy to debug and analyze your code.<br>Ideal for beginners and experienced programmers alike, our Visualizer streamlines your development process and enhances your understanding of C++ code. Optimize your coding efficiency, reduce memory leaks, and gain deeper insights with C++ Code Visualizer.<br>Try it today and transform your programming experience!</div></div><div class="_container2_12469_43"><div class="_container2Title_12469_50">About C++</div><div class="_container2Content_12469_59">C++ is a powerful, high-performance programming language that supports both procedural and object-oriented programming. It is widely used for system/software development, game development, and real-time simulation.<br>C++ is a compiled language that translates source code into machine code, which makes it very efficient and suitable for performance-critical applications.<br>Our online C++ compiler supports various standard libraries and frameworks, making it ideal for developing high-performance applications.</div></div><div class="_container4_12469_68"><div class="_container4Title_12469_75">Learn and improve your C++ Programming</div><div class="_container4Content_12469_84">Do you want to improve your C++ programming skills? Start learning with our beginner-friendly courses and tutorials on C++, Data Structures, and System Programming.<ul class="_indent_12469_2"><li><a class="_links_12469_93" href="https://www.codechef.com/roadmap/cpp-dsa" rel="noopener noreferrer" target="_blank">Complete C++ Roadmap</a></li><li><a class="_links_12469_93" href="https://www.codechef.com/learn/course/cpp" rel="noopener noreferrer" target="_blank">C++ Programming language course for complete beginners</a></li></ul></div></div></div></div></div></div><footer class="_l-footer_51r30_1 _dark_51r30_23"><div class="_l-footer__content_51r30_28 _m-footer__content_51r30_103"><div class="_m-footer-address_51r30_42"><div class="_m-cc__image_51r30_54"></div><div class="_m-cc__address_51r30_61"><span class="_cc-address_51r30_76">Bizzhub Workspaces, 6th Floor, MSR North Tower, Outer Ring Rd, Manayata Tech Park, Nagavara, Bengaluru, Karnataka 560045</span><span class="_cc-email-address_51r30_76"><a href="mailto:help@codechef.com">help@codechef.com</a></span><span class="_cc-phone-no_51r30_76">+91 95911 47880</span><hr class="_dotted-divider_51r30_68"></div><div class="_l-social-media_51r30_147"><span class="_cc-text_51r30_76">Find us online</span><div class="_l-footer__icons_51r30_164 _dark_51r30_23"><a class="_m-social_51r30_230 _dark_51r30_23 _i-youtube-grey_51r30_259" href="https://youtube.com/c/codechef1"></a><a class="_m-social_51r30_230 _dark_51r30_23 _i-facebook-grey_51r30_256" href="https://facebook.com/CodeChef"></a><a class="_m-social_51r30_230 _dark_51r30_23 _i-instagram-grey_51r30_248" href="https://instagram.com/codechef"></a><a class="_m-social_51r30_230 _dark_51r30_23 _i-twitter-grey_51r30_253" href="https://twitter.com/codechef"></a><a class="_m-social_51r30_230 _dark_51r30_23 _i-medium-grey_51r30_245" href="https://medium.com/codechef-official"></a><a class="_m-social_51r30_230 _dark_51r30_23 _i-linkedin-grey_51r30_242" href="https://linkedin.com/company/codechef"></a></div></div></div><div class="_l-footer__links_51r30_107"><div class="_l-footer__column_51r30_176"><div class="_l-footer__head_51r30_134"><p class="_m-footer__head_51r30_127">ROADMAPS</p></div><div class="_l-footer__list_51r30_114"><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/roadmap/python-dsa">Learn Python</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/roadmap/java-dsa">Learn Java</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/roadmap/c-dsa">Learn C</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/roadmap/cpp-dsa">Learn C++</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/roadmap/data-structures-and-algorithms">Data structures and Algorithms</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/roadmap/become-5-star">Competitive Programming</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/roadmaps">More Roadmaps</a></div></div></div><div class="_l-footer__column_51r30_176"><div class="_l-footer__head_51r30_134"><p class="_m-footer__head_51r30_127">CAREER PATHS</p></div><div class="_l-footer__list_51r30_114"><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/roadmap/react-developer">React JS Developer</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/roadmap/full-stack-development">Full stack development</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/roadmap/sql">SQL for Data Analysis</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/roadmap/html">Frontend Developer</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/roadmap/java-development">Java Backend Developer</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/roadmap/data-analysis-using-python">Data Analysis using Python</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/roadmap/python-development">Python Backend Developer</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/roadmap/cpp-development">C++ Developer</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/roadmap/machine-learning-using-python">Machine Learning using Python</a></div></div></div><div class="_l-footer__column_51r30_176"><div class="_l-footer__head_51r30_134"><p class="_m-footer__head_51r30_127">COMPILERS</p></div><div class="_l-footer__list_51r30_114"><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/html-online-compiler">HTML online compiler</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/cpp-online-compiler">C++ online compiler</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/c-online-compiler">C online compiler</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/java-online-compiler">Java online compiler</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/python-online-compiler">Python online compiler</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/sql-online-compiler">SQL online compiler</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/javascript-online-compiler">JavaScript online compiler</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/react-online-compiler">React online compiler</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/ide">More compilers</a></div></div></div><div class="_l-footer__column_51r30_176"><div class="_l-footer__head_51r30_134"><p class="_m-footer__head_51r30_127">COMPANY</p></div><div class="_l-footer__list_51r30_114"><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/aboutus">About us</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/college-program">For colleges</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/contests">Coding Contests</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/blogs">Blogs</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://jobboard.codechef.com/">Hire from us</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/contactus">Contact us</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/privacy-policy">Privacy Policy</a></div><div class="_l-footer__link_51r30_107"><a class="_m-footer__link_51r30_203" href="https://www.codechef.com/faq">Frequently Asked Questions</a></div></div></div></div></div><hr class="_divider_51r30_83"><div class="_cc-trademark_51r30_76"><p class="_cc-trademark-text_51r30_76">© 2026 CodeChef Inc. All rights reserved.</p></div></footer><div id="gdpr-cookie-notif" class="_global--announcement_xcnwk_1" style="display: none;"><div class="_global--announcement__content_xcnwk_19"><p>We use cookies to improve your experience and for analytical purposes. Read our <a class="" href="https://www.codechef.com/privacy-policy">Privacy Policy</a> and <a class="" href="https://www.codechef.com/terms">Terms</a> to know more. You consent to our cookies if you continue to use our website.</p></div><div class="_global--announcement__action_xcnwk_33"><button type="button" id="gdpr-i-love-cookies">Okay</button></div></div></div></div>
  <script type="text/javascript">
    // Payment Scripts
    if (['pro', 'getting-started', 'dashboard', 'roadmap'].includes(window.location.pathname.split('/')[1])) {
      const razorPay = document.createElement('script');
      razorPay.setAttribute('src', 'https://checkout.razorpay.com/v1/checkout.js');
      document.head.appendChild(razorPay);

      // const instamojo = document.createElement('script');
      // instamojo.setAttribute('src', 'https://js.instamojo.com/v1/checkout.js');
      // document.head.appendChild(instamojo);

    }
    const scriptElement = document.createElement('script');
    scriptElement.setAttribute('src',
            "/sites/all/modules/codechef_alerts/codechef_alerts.js?v=e4d0e04e7288c13d5006f3fb80a52934"
    );
    scriptElement.setAttribute('async', '');
    document.body.appendChild(scriptElement);
  </script>
  <script async="" type="text/javascript" src="./KMP_files/cookies.js.download"></script>
  <script type="text/javascript">
    const loadingMessages = [
      'Transform every day with the habit of learning',
      'Explored our courses yet? Enroll now! Over 500k learners have already enrolled.',
      'Pro tip: Facing a challenge while solving problem? Tap into AI Help',
      'Set the pace, set the goal, Maintain your streak by solving problem everyday',
      'Set your own goal to finish each modules',
      'Pro tip: Pseudo code first, then code with ease.',
      'Coding is not difficult, you need to try hard enough',
      '1% better everyday can lead to big results.',
      'Hard work and consistency is the only way to success',
      'Don\'t stop until you are in the top 1%',
      'Becoming the best coder is easy! Just keep doing CodeChef.',
      'Compete in the XP Weekly Leaderboard and see where you rank!',
    ];
    const randomIndex = Math.floor(Math.random() * loadingMessages.length);
    document.getElementById('initialLoadingMessage').innerText = loadingMessages[randomIndex];
  </script>
<script type="module" src="./KMP_files/vce701823e78c4301a35b7e07294d87301792088814092" integrity="sha512-UKNk8GbxkABxKcXYuLkO16EleLGUkcvJWtpSNmExE0Too3ZaFAxTscNWEc1OdAv5/BikHawapSCaiD2XCmp+Bw==" data-cf-beacon="{&quot;version&quot;:&quot;2024.11.0&quot;,&quot;token&quot;:&quot;77024e52546647f9a933aafda26cc5ce&quot;,&quot;spa&quot;:2}" crossorigin="anonymous"></script>



<script type="text/javascript">
    window.CDN_URL = 'https://cdn.codechef.com';
    window.csrfToken = "ff0e49bafdd8e6d74432fbedf0688b932b04bc02241279474a221bd3775308ca";
    window.APPS_URL = 'https://www.codechef-apps.com';
    window.DISCUSS_URL = 'https://discuss.codechef.com';
    window.tawkPropertyId = '668d037a7a36f5aaec9634a5';
    window.widgetId = '1i2bdb6dt';
    try {
        window.codeChefUserData = {"status":"success","user":{"username":"","uid":0,"email":"","profileImage":null,"profileImagePath":"https:\/\/cdn.codechef.com\/sites\/all\/themes\/abessive\/images\/user_default_thumb.jpg","oauth_buttons":null,"oauthData":null,"html_handle":null,"userRatingStar":"0","userRatingStarColor":"black","isAdmin":false,"isContentAdmin":false,"isCollegeSupportAdmin":false,"isHACAdmin":false,"canLockProblems":false,"hasAnySpecialPermission":false,"isPremiumUser":false,"isVerifiedUser":true,"user_consented_privacy_policy_version":null,"user_consented_privacy_policy_on":null,"current_privacy_policy_version":null,"visitedContests":[],"rating":-1,"userStarHtml":"","proDiscount":null,"theme":"dark","fullName":null,"pro_plan":null,"sale":{"saleEndDateIST":"2026-10-31 05:59:59","saleTitle":"FLASH SALE","saleDescription":"CODECHEF FLASH SALE IS ACTIVE","isSaleOngoing":false,"saleDaysLeft":-0,"saleEndDateUTC":"2026-10-31T00:29:59"},"isUserPartOfAnyUserGroup":false,"userSelectedProgrammingLanguage":"","country":null,"isNumberVerified":false,"isJobProfileComplete":false,"league":0,"credits":0,"aiChatLanguage":"English"},"time":1793439646,"ip":"2409:4085:808f:f66e:a5c8:5f3e:cfb4:4cc7","adStrip":null};
    } catch (e) {
        window.codeChefUserData = {};
    }
    try {
        window.userMessages = {"status":"success","messages":null};
    } catch (e) {
        window.userMessages = {};
    }
</script>

    <div id="g_id_onload" data-client_id="239412980790-t66g30lvvdcs9u1q0l8tha23599ltt1j.apps.googleusercontent.com" data-login_uri="https://www.codechef.com/onetap">
    </div>
    <script src="./KMP_files/codechef_alerts.js.download" async=""></script><div style="top: 0px; left: 0px; position: fixed; display: none; place-items: center; height: 100vh; width: 100vw; z-index: 10000; line-height: 1.5; font-size: 16px; backdrop-filter: blur(2px); background: rgba(0, 0, 0, 0.1); box-sizing: border-box;"></div><div class=" ace_editor ace_autocomplete ace_dark ace-tomorrow-night" style="font-size: 14px; left: 133.176px; height: 80px; bottom: 201.823px; display: none;"><textarea class="ace_text-input" wrap="off" autocorrect="off" autocapitalize="off" spellcheck="false" aria-haspopup="false" aria-autocomplete="both" role="textbox" aria-label="Cursor at row 1" aria-hidden="true" style="opacity: 0; font-size: 1px; top: 0px; left: -100px;"></textarea><div class="ace_gutter" aria-hidden="true" style="display: none; left: 0px; width: 41px;"><div class="ace_layer ace_gutter-layer ace_folding-enabled" style="height: 1e+06px; top: 0px; left: 0px; width: 41px;"><div class="ace_gutter-cell " aria-hidden="true" style="height: 20px; top: 0px;">1<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 20px; top: 20px;">2<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 20px; top: 40px;">3<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 20px; top: 60px;">4<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 20px; top: 80px;">5<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 20px; top: 100px;">6<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 20px; top: 120px;">7<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 20px; top: 140px;">8<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 20px; top: 160px;">9<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div></div></div><div class="ace_scroller " style="line-height: 20px; left: 0px; right: 0px; bottom: 0px;"><div class="ace_content" style="cursor: default; top: 0px; left: 0px; width: 298px; height: 120px;"><div class="ace_layer ace_print-margin-layer"><div class="ace_print-margin" style="left: 620px; visibility: hidden;"></div></div><div class="ace_layer ace_marker-layer"><div class="ace_active-line" style="height: 20px; top: 0px; left: 0px; right: 0px;"></div></div><div class="ace_layer ace_text-layer" role="listbox" aria-roledescription="Autocomplete suggestions" aria-label="Autocomplete suggestions" aria-activedescendant="suggest-aria-id:0" style="height: 1e+06px; margin: 0px 4px; top: 0px; left: 0px;"><div class="ace_line ace_selected" role="option" aria-roledescription="item" aria-setsize="4" aria-describedby="doc-tooltip" aria-posinset="1" aria-label="endl, local" id="suggest-aria-id:0" aria-selected="true" style="height: 20px; top: 0px;"><span class="ace_completion-highlight" role="mark">end</span><span class="ace_">l</span><span class="ace_completion-spacer"> </span><span class="ace_completion-meta">local</span></div><div class="ace_line" role="option" aria-roledescription="item" aria-setsize="4" aria-describedby="doc-tooltip" aria-posinset="2" aria-label="friend, keyword" style="height: 20px; top: 20px;"><span class="ace_">fri</span><span class="ace_completion-highlight" role="mark">end</span><span class="ace_completion-spacer"> </span><span class="ace_completion-meta">keyword</span></div><div class="ace_line" role="option" aria-roledescription="item" aria-setsize="4" aria-describedby="doc-tooltip" aria-posinset="3" aria-label="lower_bound, snippet" style="height: 20px; top: 40px;"><span class="ace_">low</span><span class="ace_completion-highlight" role="mark">e</span><span class="ace_">r_bou</span><span class="ace_completion-highlight" role="mark">nd</span><span class="ace_completion-spacer"> </span><span class="ace_completion-meta">snippet</span></div><div class="ace_line" role="option" aria-roledescription="item" aria-setsize="4" aria-describedby="doc-tooltip" aria-posinset="4" aria-label="upper_bound, snippet" style="height: 20px; top: 60px;"><span class="ace_">upp</span><span class="ace_completion-highlight" role="mark">e</span><span class="ace_">r_bou</span><span class="ace_completion-highlight" role="mark">nd</span><span class="ace_completion-spacer"> </span><span class="ace_completion-meta">snippet</span></div></div><div class="ace_layer ace_marker-layer"></div><div class="ace_layer ace_cursor-layer ace_hidden-cursors" style="opacity: 0;"><div class="ace_cursor" style="display: block; top: 0px; left: 4px; width: 8px; height: 20px;"></div></div></div></div><div class="ace_scrollbar ace_scrollbar-v" style="width: 20px; height: 80px; bottom: 0px; display: none;"><div class="ace_scrollbar-inner" style="width: 20px; height: 80px;">&nbsp;</div></div><div class="ace_scrollbar ace_scrollbar-h" style="display: none; height: 20px; left: 0px; right: 0px; width: 298px;"><div class="ace_scrollbar-inner" style="height: 20px; width: 283px;">&nbsp;</div></div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: hidden;"><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: visible;">הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה</div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font-style: inherit; font-variant: inherit; font-stretch: inherit; font-size: inherit; line-height: inherit; font-family: inherit; font-optical-sizing: inherit; font-size-adjust: inherit; font-kerning: inherit; font-feature-settings: inherit; font-variation-settings: inherit; font-language-override: inherit; overflow: visible;">XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX</div></div><div class="ace_tooltip" role="tooltip" style="display: none; pointer-events: auto;"></div></div></body></html>