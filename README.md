# Rotation Interpolation Testing

*These are future references for myself or for anyone struggling to grasp the differences between different types of rotation interpolation*

tldr: Always convert to Quat before interpolating, FRotator values in code aren't the same as details panel.

<table>
  <tr>
    <td width="50%"><img src="Images\QuatScaled.PNG" /></td>
    <td width="50%"><img src="Images\Quat.PNG" /></td>
  </tr>
</table>
 <table>
  <tr>
    <td width="33%"><img src="Images\LerpRot.PNG" /></td>
    <td width="33%"><img src="Images\RInterp.PNG" /></td>
    <td width="33%"><img src="Images\RInterpConst.PNG" /></td>
  </tr>
</table>


*Note*
The actualy values printed after quaternion is the actual quaternion values, cus unreal likes to translate,
xya gets translated to a unit vector & the angle aka w is *kind of/acts like* cos((arccos vectorA dotPr vectorB)/2)

<img src="Images\comparision.gif" /></td>
